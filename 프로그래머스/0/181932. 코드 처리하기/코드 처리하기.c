#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* code) {
    int len = strlen(code);
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int mode = 0;
    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (mode == 0) {
            if (code[i] != '1' && i % 2 == 0) {
                answer[idx++] = code[i];
            }
            else if (code[i] == '1') mode = 1;
        }
        else {
            if (code[i] != '1' && i % 2 == 1) {
                answer[idx++] = code[i];
            }
            else if (code[i] == '1') mode = 0;
        }
    }
    
    if (idx == 0) {
        free(answer);
        return strdup("EMPTY");
    }
    
    answer[idx] = '\0';
    
    return (char*)realloc(answer, (idx + 1) * sizeof(char));
}