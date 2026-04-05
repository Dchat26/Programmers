#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str1, const char* str2) {
    int len = 2 * strlen(str1);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0, k = 0;
    for (int i = 0; i < len; i++) {
        if ( i % 2 == 0) answer[i] = str1[j++];
        else answer[i] = str2[k++];
    }
    answer[len] = '\0';
    
    return answer;
}