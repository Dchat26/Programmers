#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* str_list[], size_t str_list_len) {
    int idx = -1;
    char s = '\0';

    for (int i = 0; i < (int)str_list_len; i++) {
        if (strcmp(str_list[i], "l") == 0 || strcmp(str_list[i], "r") == 0) {
            idx = i;
            s = str_list[i][0];
            break;
        }
    }
    
    if (idx == -1 || (s == 'l' && idx == 0) || (s == 'r' && idx == (int)str_list_len - 1)) {
        return NULL; 
    }
    
    int start = (s == 'l') ? 0 : idx + 1;
    int end = (s == 'l') ? idx : (int)str_list_len;
    int len = end - start;

    char** answer = (char**)malloc((len + 1) * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        answer[i] = strdup(str_list[start + i]);
    }
    answer[len] = NULL;
    
    return answer;
}