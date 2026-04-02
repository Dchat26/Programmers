#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    int** answer = (int**)malloc(n * sizeof(int*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < n; i++) {
        answer[i] = (int*)calloc(n, sizeof(int));
        if (answer[i] == NULL) {
            for (int j = 0; j < i; j++) free(answer[j]);
            free(answer);
            return NULL;
        }
    }
    
    for (int i = 0; i < n; i++) {
        answer[i][i] = 1;
    }
    
    return answer;
}