#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = arr;
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < queries_rows; i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        for (int i = s; i <= e; i++) {
            if (i % k == 0) answer[i]++;
        }
    }
    
    return answer;
}