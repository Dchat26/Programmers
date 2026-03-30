#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_str, int n) {
    int len = strlen(my_str);
    int cnt = (len % n == 0) ? (len / n) : (len / n + 1);
    
    char** answer = (char**)malloc(cnt * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < cnt; i++) {
        answer[i] = (char*)malloc((n + 1) * sizeof(char));
        if (answer[i] == NULL) break;
        
        strncpy(answer[i], my_str + (i * n), n);
        
        answer[i][n] = '\0';
    }
    
    return answer;
}