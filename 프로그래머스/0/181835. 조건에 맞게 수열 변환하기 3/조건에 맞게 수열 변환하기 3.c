#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int k) {
    int* answer = (int*)malloc(arr_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    if (k % 2 == 0) {
        for (int i = 0; i < arr_len; i++) {
            answer[i] = arr[i] + k;
        }
    }
    else {
        for (int i = 0; i < arr_len; i++) {
            answer[i] = arr[i] * k;
        }
    }
    
    return answer;
}