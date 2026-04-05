#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(arr_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < arr_len; i++) answer[i] = arr[i];
    
    for (int i = 0; i < queries_rows; i++) {
        int start = queries[i][0];
        int end = queries[i][1];
        for (int i = start; i <= end; i++) {
            answer[i]++;
        }
    }
    
    return answer;
}