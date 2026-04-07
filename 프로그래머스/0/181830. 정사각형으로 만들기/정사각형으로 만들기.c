#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int** arr, size_t arr_rows, size_t arr_cols) {
    int len = (arr_rows > arr_cols) ? arr_rows : arr_cols;
    int** answer = (int**)malloc(len * sizeof(int*));
    if (answer == NULL) return NULL;
    
    for(int i = 0; i < len; i++) {
        answer[i] = (int*)calloc(len, sizeof(int));
        if (answer[i] == NULL) {
            for (int j = 0; j < i; j++) free(answer[j]);
            free(answer);
            return NULL;
        }   
    }
    
    for (int i = 0; i < arr_rows; i++) {
        for (int j = 0; j < arr_cols; j++) {
            answer[i][j] = arr[i][j];
        }
    }
    
    return answer;
}