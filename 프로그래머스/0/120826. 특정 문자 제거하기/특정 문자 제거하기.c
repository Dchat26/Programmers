#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* letter) {
    int len = strlen(my_string);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0;
    char target = letter[0];
    
    for (int i = 0; i < len; i++) {
        if (my_string[i] != target) {
            answer[j++] = my_string[i];
        }
    }
    answer[j] = '\0';
    
    return answer;
}