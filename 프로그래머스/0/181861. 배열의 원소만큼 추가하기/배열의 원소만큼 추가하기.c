#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int len = 0;
    for (int i = 0; i < arr_len; i++) {
        len += arr[i];
    }
    
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int k = 0;
    for (int i = 0; i < arr_len; i++) {
        for (int j = 0; j < arr[i]; j++) {
            answer[k++] = arr[i];
        }
    }
    
    return answer;
}