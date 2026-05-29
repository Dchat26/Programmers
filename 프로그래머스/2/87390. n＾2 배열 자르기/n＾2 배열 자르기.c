#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, long long left, long long right) {
    int reslen = right - left + 1;
    int* answer = (int*)malloc(reslen * sizeof(int));
    if (answer == NULL) return NULL;
    
    int idx = 0;
    for (long long i = left; i <= right; i++) {
        int row = i / n;
        int col = i % n;
        
        int value = ((row < col) ? col : row) + 1;
        answer[idx++] = value;
    }
    
    return answer;
}