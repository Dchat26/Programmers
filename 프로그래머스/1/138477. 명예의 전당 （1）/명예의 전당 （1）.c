#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* solution(int k, int score[], size_t score_len) {
    int* answer = (int*)malloc(score_len * sizeof(int));
    int* temp = (int*)malloc(k * sizeof(int)); 
    if (answer == NULL || temp == NULL) return NULL;
    
    int temp_size = 0;
    for (int i = 0; i < score_len; i++) {
        if (temp_size < k) {
            temp[temp_size++] = score[i];
            qsort(temp, temp_size, sizeof(int), compare); 
        } 
        else {
            if (score[i] > temp[0]) {
                temp[0] = score[i];
                qsort(temp, k, sizeof(int), compare);
            }
        }

        answer[i] = temp[0];
    }
    
    free(temp);
    return answer;
}