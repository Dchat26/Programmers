#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int* alp = (int*)calloc(26, sizeof(int));
    if (alp == NULL) return NULL;
    
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        int idx = s[i] - 'a';
        alp[idx]++;
    }
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) {
        free(alp);
        return NULL;
    }
    
    int j = 0;
    for (int i = 0; i < 26; i++) {
        if (alp[i] == 1) {
            answer[j++] = i + 'a';
        }
    }
    answer[j] = '\0';
    
    free(alp);
    return answer;
}