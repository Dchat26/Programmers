#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    int max_len = 0;
    int len = 0;
    for (int i = 0; i < flag_len; i++) {
        if (flag[i]) {
            len += arr[i] * 2;
            if (max_len < len) max_len = len;
        }
        else {
            len -= arr[i];
            if (max_len < len) max_len = len;
        }
    }
    
    int* temp = (int*)calloc(max_len, sizeof(int));
    if (temp == NULL) return NULL;
    
    int j = 0;
    for (int i = 0; i < flag_len; i++) {
        if (flag[i]) {
            for (int k = 0; k < arr[i] * 2; k++) {
                temp[j++] = arr[i];
            }
        }
        else {
            for (int k = 0; k < arr[i]; k++) {
                temp[--j] = 0;
            }
        }
    }
    
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) {
        free(temp);
        return NULL;
    }
    
    for (int i = 0; i < len; i++) answer[i] = temp[i];
    
    free(temp);
    return answer;
}