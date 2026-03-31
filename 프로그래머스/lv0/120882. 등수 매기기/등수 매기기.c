#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int** score, size_t score_rows, size_t score_cols) {
    int* temp = (int*)malloc(score_rows * sizeof(int));
    int* answer = (int*)malloc(score_rows * sizeof(int));
    if (temp == NULL || answer == NULL) return NULL;
    
    for (int i = 0; i < score_rows; i++) {
        answer[i] = 1;
        temp[i] = score[i][0] + score[i][1];
    }
    
    for (int i = 0; i < score_rows; i++) {
        for (int j = 0; j < score_rows; j++) {
            if (temp[j] > temp[i]) answer[i]++;
        }
    }
    
    free(temp);
    return answer;
}