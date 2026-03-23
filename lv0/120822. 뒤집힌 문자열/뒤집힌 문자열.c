#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    size_t len = strlen(my_string);
    char* answer = (char*)malloc(len + 1 * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        answer[i] = my_string[len - 1 - i];
    }
    answer[len] = '\0';
    
    return answer;
}