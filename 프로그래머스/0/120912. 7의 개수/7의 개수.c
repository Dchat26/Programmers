#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len) {
    int answer = 0;
    for (int i = 0; i < array_len; i++) {
        int target = array[i];
        while (target > 0) {
            if (target % 10 == 7) answer++;
            
            target /= 10;
        }
    }
    
    return answer;
}