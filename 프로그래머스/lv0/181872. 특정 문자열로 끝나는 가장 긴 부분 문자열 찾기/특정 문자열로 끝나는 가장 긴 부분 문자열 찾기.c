#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* myString, const char* pat) {
    char* state = strstr(myString, pat);
    int idx = 0;
    while (state != NULL) {
        idx = state - myString;
        state = strstr(state + 1, pat);
    }
    
    int len = idx + strlen(pat);
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    strncpy(answer, myString, len);
    answer[len] = '\0';
    
    return answer;
}