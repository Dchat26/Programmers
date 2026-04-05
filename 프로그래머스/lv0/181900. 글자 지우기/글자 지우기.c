#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int indices[], size_t indices_len) {
    int len = strlen(my_string) - indices_len;
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int k = 0;
    for (int i = 0; i < strlen(my_string); i++) {
        int is_TF = 1;
        for (int j = 0; j < indices_len; j++) {
            if (i == indices[j]) {
                is_TF = 0;
                break;
            }
        }
        
        if (is_TF) answer[k++] = my_string[i];
    }
    answer[k] = '\0';
    
    return answer;
}