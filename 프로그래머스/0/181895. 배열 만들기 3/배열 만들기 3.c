#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** intervals, size_t intervals_rows, size_t intervals_cols) {
    int* p1 = intervals[0];
    int* p2 = intervals[1];
    
    int len = (p1[1] - p1[0]) + (p2[1] - p2[0]) + 2;
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int k = 0;
    for (int i = p1[0]; i <= p1[1]; i++) answer[k++] = arr[i];
    for (int j = p2[0]; j <= p2[1]; j++) answer[k++] = arr[j];
    
    return answer;
}