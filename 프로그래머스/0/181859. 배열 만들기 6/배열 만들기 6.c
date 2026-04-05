#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int arr[], size_t arr_len, size_t* result_len) {
    int* stk = (int*)malloc(arr_len * sizeof(int));
    if (stk == NULL) return NULL;
    
    int top = -1;
    for (int i = 0; i < arr_len; i++) {
        if (top == -1) {
            stk[++top] = arr[i];
        } else if (stk[top] == arr[i]) {
            top--;
        } else {
            stk[++top] = arr[i];
        }
    }

    if (top == -1) {
        free(stk);
        
        int* empty = (int*)malloc(sizeof(int));
        if (empty == NULL) return NULL;
        empty[0] = -1;
        
        return empty;
    }

    return (int*)realloc(stk, (top + 1) * sizeof(int));
}