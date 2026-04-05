#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, size_t* result_len) {
    int start = -1;
    int end = -1;

    for (int i = 0; i < arr_len; i++) {
        if (arr[i] == 2) {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }

    if (start == -1) {
        int* empty = (int*)malloc(sizeof(int));
        if (empty == NULL) return NULL;
        empty[0] = -1;
        
        return empty;
    }

    int sub_len = end - start + 1;
    int* answer = (int*)malloc(sub_len * sizeof(int));
    if (answer == NULL) return NULL;

    for (int i = 0; i < sub_len; i++) {
        answer[i] = arr[start + i];
    }

    return answer;
}