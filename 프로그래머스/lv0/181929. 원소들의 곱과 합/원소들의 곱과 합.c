#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int msum = 1;
    int sum = 0;
    for (int i = 0; i < num_list_len; i++) {
        msum *= num_list[i];
        sum += num_list[i];
    }
    
    if (msum < sum * sum) return 1;
    else return 0;
}