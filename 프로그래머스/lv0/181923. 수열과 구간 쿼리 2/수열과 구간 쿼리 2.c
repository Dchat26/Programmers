#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(queries_rows * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < queries_rows; i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        int min_val = 1000001;
        int count = 0;
        for (int j = s; j <= e; j++) {
            if (arr[j] > k && min_val > arr[j]) {
                min_val = arr[j];
                count++;
            }
        }
        
        if (count == 0) answer[i] = -1;
        else answer[i] = min_val;
    }
    
    return answer;
}