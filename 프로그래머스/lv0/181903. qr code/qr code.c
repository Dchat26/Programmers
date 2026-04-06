#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int q, int r, const char* code) {
    int len = strlen(code);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (i % q == r) count++;
    }
    
    char* answer = (char*)malloc((count + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (i % q == r) {
            answer[j++] = code[i];
        }
    }
    answer[j] = '\0';
    
    return answer;
}