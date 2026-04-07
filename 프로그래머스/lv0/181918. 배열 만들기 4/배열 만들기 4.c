#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* answer = (int*)malloc(arr_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int top = -1;
    int i = 0;
    while (i < arr_len) {
        if (top == -1) {
            answer[++top] = arr[i];
            i++;
        }
        else if (answer[top] < arr[i]) {
            answer[++top] = arr[i];
            i++;
        }
        else if (i != 0 && answer[i] >= arr[i]) i--;
        else {
            top--;
        }
    }
    
    if (top == -1) {
        free(answer);
        return NULL;
    }
    
    return (int*)realloc(answer, (i + 1) * sizeof(int));
}