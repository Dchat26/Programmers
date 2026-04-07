#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {
    char* answer = strdup(my_string);
    if (answer == NULL) return NULL;
    
    int slen = strlen(overwrite_string);
    for (int i = 0; i < slen; i++) {
        answer[s + i] = overwrite_string[i];
    }
    answer[strlen(my_string)] = '\0';
    
    return answer;
}