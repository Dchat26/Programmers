#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* before, const char* after) {
    int* alp = (int*)calloc(26, sizeof(int));
    if (alp == NULL) return -1;
    
    int len = strlen(before);
    for (int i = 0; i < len; i++) {
        int idx = before[i] - 'a';
        alp[idx]++;
    }
    
    for (int i = 0; i < len; i++) {
        int idx = after[i] - 'a';
        if (alp[idx] == 0) {
            free(alp);
            return 0;
        } 
        else {
            alp[idx]--;
        }
    }
    
    free(alp);
    return 1;
}