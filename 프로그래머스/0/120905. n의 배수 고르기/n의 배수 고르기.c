#include <stdio.h>
#include <stdlib.h>

int* solution(int n, int numlist[], size_t numlist_len) {
    int* answer = (int*)malloc(numlist_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (int i = 0; i < numlist_len; i++) {
        if (numlist[i] % n == 0) answer[j++] = numlist[i];
    }
    
    if (j == 0) {
        free(answer);
        return NULL;
    }
    
    int* temp = (int*)realloc(answer, j * sizeof(int));
    if (temp == NULL) return answer;
    
    answer = temp;
    
    return answer;
}