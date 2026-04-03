#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* strArr[], size_t strArr_len) {
    int count = 0;
    for (size_t i = 0; i < strArr_len; i++) {
        if (strstr(strArr[i], "ad") == NULL) count++;
    }
    
    char** answer = (char**)malloc(count * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for (size_t i = 0, j = 0; i < strArr_len; i++) {
        if (strstr(strArr[i], "ad") == NULL) {
            int len = strlen(strArr[i]);
            answer[j] = (char*)malloc((len + 1) * sizeof(char));
            if (answer[j] == NULL) {
                for (int k = 0; k < j; k++) {
                    free(answer[k]);
                    free(answer);
                    return NULL;
                }
            }
            
            strcpy(answer[j], strArr[i]);
            j++;
        }
    }
    
    return answer;
}