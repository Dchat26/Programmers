#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
    size_t total_len = 0;
    for (size_t i = 0; i < str_list_len; i++) {
        if (strstr(str_list[i], ex) == NULL) {
            total_len += strlen(str_list[i]);
        }
    }
    
    char* answer = (char*)malloc((total_len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    answer[0] = '\0';
    for (size_t i = 0; i < str_list_len; i++) {
        if (strstr(str_list[i], ex) == NULL) {
            strcat(answer, str_list[i]);
        }
    }
    
    return answer;
}