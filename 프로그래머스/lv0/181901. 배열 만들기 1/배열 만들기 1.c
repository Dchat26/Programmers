#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    int len = n / k;
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 1, j = 0; i <= n; i++) {
        if (i % k == 0) answer[j++] = i; 
    }
    
    return answer;
}