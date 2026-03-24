#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        char c = my_string[i];
        if (c >= 'a' && c <= 'z') {
            answer[i] = c - ('a' - 'A');
        }
        else {
            answer[i] = c + ('a' - 'A');
        }
    }
    answer[len] = '\0';
    
    return answer;
}