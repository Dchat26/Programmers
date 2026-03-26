#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int num1, int num2) {
    int len = strlen(my_string);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        if (i == num1) {
            answer[i] = my_string[num2];
            continue;
        } else if (i == num2) {
            answer[i] = my_string[num1];
            continue;
        }
        
        answer[i] = my_string[i];
    }
    answer[len] = '\0';
    
    return answer;
}