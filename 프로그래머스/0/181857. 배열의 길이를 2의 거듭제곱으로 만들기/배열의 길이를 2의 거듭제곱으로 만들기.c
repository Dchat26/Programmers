#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int target = 1;
    while (target < arr_len) {
        target *= 2;
    }
    
    int* answer = (int*)calloc(target, sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < arr_len; i++) answer[i] = arr[i];
    
    return answer;
}