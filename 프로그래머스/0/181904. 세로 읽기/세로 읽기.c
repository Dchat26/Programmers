#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int m, int c) {
    int len = strlen(my_string) / m;
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        int idx = (i * m) + (c - 1);
        answer[i] = my_string[idx];
    }
    answer[len] = '\0';
    
    return answer;
}