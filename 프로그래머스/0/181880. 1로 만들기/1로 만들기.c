#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int count = 0;
    for (size_t i = 0; i < num_list_len; i++) {
        int target = num_list[i];
        while (target > 1) {
            count++;
            if (target % 2 == 0) target /= 2;
            else target = (target - 1) / 2;
        }
    }
    
    return count;
}