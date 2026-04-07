#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    int bottom = 0;
    int top = arr_len - 1;
    
    for (int i = 0; i < query_len; i++) {
        int idx = bottom + query[i];
        
        if (i % 2 == 0) top = idx;
        else bottom = idx;
    }
    
    int len = top - bottom + 1;
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        answer[i] = arr[bottom + i];
    }
    
    return answer;
}