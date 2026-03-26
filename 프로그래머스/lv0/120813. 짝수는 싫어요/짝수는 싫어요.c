#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc((n / 2) * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 1, j = 0; i <= n; i++) {
        if (i % 2 == 1) {
            answer[j++] = i;
        }
    }
    
    return answer;
}