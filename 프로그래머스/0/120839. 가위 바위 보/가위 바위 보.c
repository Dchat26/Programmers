#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rsp) {
    int len = strlen(rsp);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        if (rsp[i] == '2') {
            answer[i] = '0';
        } else if (rsp[i] == '0') {
            answer[i] = '5';
        } else if (rsp[i] == '5') {
            answer[i] = '2';
        }
    }
    answer[len] = '\0';
    
    return answer;
}