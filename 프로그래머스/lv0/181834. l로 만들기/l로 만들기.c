#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* myString) {
    int len = strlen(myString);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        if (myString[i] < 'l') answer[i] = 'l';
        else answer[i] = myString[i];
    }
    answer[len] = '\0';
    
    return answer;
}