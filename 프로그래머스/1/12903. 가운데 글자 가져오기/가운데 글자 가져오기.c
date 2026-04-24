#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len = strlen(s);
    
    char* answer;
    if (len % 2 == 0) {
        answer = (char*)malloc(3 * sizeof(char));
        if (answer == NULL) return NULL;
        
        answer[0] = s[len / 2 - 1];
        answer[1] = s[len / 2];
        answer[2] = '\0';
    }
    else {
        answer = (char*)malloc(2 * sizeof(char));
        if (answer == NULL) return NULL;
        
        answer[0] = s[len / 2];
        answer[1] = '\0';
    }
    
    return answer;
}