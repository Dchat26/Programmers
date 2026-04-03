#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* alp) {
    int len = strlen(my_string);
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        if (my_string[i] == alp[0]) {
            answer[i] = my_string[i] - ('a' - 'A');
        }
        else answer[i] = my_string[i];
    }
    answer[len] = '\0';
    
    return answer;
}