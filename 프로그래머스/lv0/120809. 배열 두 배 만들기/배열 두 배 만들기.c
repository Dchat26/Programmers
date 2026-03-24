#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(numbers_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < numbers_len; i++) {
        answer[i] = 2 * numbers[i];
    }
    
    return answer;
}