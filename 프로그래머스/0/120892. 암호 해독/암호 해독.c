#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cipher, int code) {
    int len = strlen(cipher);
    int clen = len / code;
    
    char* answer = (char*)malloc((clen + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (int i = code - 1; i < len; i += code) {
        answer[j++] = cipher[i]; 
    }
    answer[j] = '\0';
    
    return answer;
}