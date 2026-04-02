#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* n_str) {
    int len = strlen(n_str);
    int total_len = 0;
    for (int i = 0; i < len; i++) {
        if (n_str[i] != '0') break;
        else total_len++;
    }
    
    char* answer = (char*)malloc((len - total_len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (int i = total_len; i < len; i++) {
        answer[j++] = n_str[i];
    }
    answer[j] = '\0';
    
    return answer;
}