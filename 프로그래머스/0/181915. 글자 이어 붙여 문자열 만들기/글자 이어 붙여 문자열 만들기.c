#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int index_list[], size_t index_list_len) {
    char* answer = (char*)malloc((index_list_len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (int i = 0; i < index_list_len; i++) {
        answer[j++] = my_string[index_list[i]];
    }
    answer[j] = '\0';
    
    return answer;
}