#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* names[], size_t names_len) {
    int len = (names_len % 5 == 0) ? names_len / 5 : names_len / 5 + 1;
    
    char** answer = (char**)malloc(len * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        int idx = 5 * i;
        int slen = strlen(names[idx]);
        answer[i] = (char*)malloc((slen + 1) * sizeof(char));
        if (answer[i] == NULL) {
            for (int j = 0; j < i; j++) free(answer[j]);
            free(answer);
            return NULL;
        }
        
        strcpy(answer[i], names[idx]);
    }
    
    return answer;
}