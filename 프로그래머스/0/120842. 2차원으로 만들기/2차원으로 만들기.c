#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int** solution(int num_list[], size_t num_list_len, int n) {
    int len = num_list_len / n;
    
    int** answer = (int**)malloc(len * sizeof(int*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        answer[i] = (int*)malloc(n * sizeof(int));
        if (answer[i] == NULL) break;
    }
    
    int k = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < n; j++) {
            answer[i][j] = num_list[k++];
        }
    }
    
    return answer;
}