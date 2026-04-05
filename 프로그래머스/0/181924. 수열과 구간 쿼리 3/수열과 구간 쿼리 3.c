#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    for (int i = 0; i < queries_rows; i++) {
        int p1 = queries[i][0];
        int p2 = queries[i][1];
        
        int temp = arr[p1];
        arr[p1] = arr[p2];
        arr[p2] = temp;
    }
    
    int* answer = (int*)malloc(arr_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < arr_len; i++) answer[i] = arr[i];
    
    return answer;
}