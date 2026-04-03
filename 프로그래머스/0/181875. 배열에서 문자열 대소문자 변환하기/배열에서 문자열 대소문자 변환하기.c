#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = (char**)malloc(strArr_len * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for (size_t i = 0; i < strArr_len; i++) {
        if (i % 2 == 0) {
            int len = strlen(strArr[i]);
            answer[i] = (char*)malloc((len + 1) * sizeof(char));
            if (answer[i] == NULL) {
                for (int j = 0; j < i; j++) free(answer[j]);
                free(answer);
                return NULL;
            }
            
            for (int k = 0; k < len; k++) {
                if (strArr[i][k] >= 'A' && strArr[i][k] <= 'Z') {
                    answer[i][k] = strArr[i][k] + ('a' - 'A');
                }
                else answer[i][k] = strArr[i][k];
            }
            answer[i][len] = '\0';
        }
        else {
            int len = strlen(strArr[i]);
            answer[i] = (char*)malloc((len + 1) * sizeof(char));
            if (answer[i] == NULL) {
                for (int j = 0; j < i; j++) free(answer[j]);
                free(answer);
                return NULL;
            }
            
            for (int k = 0; k < len; k++) {
                if (strArr[i][k] >= 'a' && strArr[i][k] <= 'z') {
                    answer[i][k] = strArr[i][k] - ('a' - 'A');
                }
                else answer[i][k] = strArr[i][k];
            }
            answer[i][len] = '\0';
        }
    }
    
    return answer;
}