#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int elements[], size_t elements_len) {
    int* ex = (int*)malloc((elements_len * 2) * sizeof(int));
    if (ex == NULL) return -1;
    
    for (int i = 0, j = 0; i < 2; i++) {
        for (int k = 0; k < elements_len; k++) {
            ex[j++] = elements[k];
        }
    }
    
    bool* setlist = (bool*)calloc(1000001, sizeof(bool));
    if (setlist == NULL) {
        free(ex);
        return -1;
    }
    
    for (int i = 0; i < elements_len; i++) {
        int current = 0;
        for (int j = 0; j < elements_len; j++) {
            current += ex[i + j];
            setlist[current] = true;
        }
    }
    
    int answer = 0;
    for (int i = 0; i < 1000001; i++) {
        if (setlist[i]) {
            answer++;
        }
    }
    
    free(setlist);
    free(ex);
    
    return answer;
}