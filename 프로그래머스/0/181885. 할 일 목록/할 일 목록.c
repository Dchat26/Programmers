#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
    int count = 0;
    for (int i = 0; i < finished_len; i++) {
        if (!finished[i]) count++;
    }
    
    char** answer = (char**)malloc(count * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for(int i = 0, j = 0; i < todo_list_len; i++) {
        if (!finished[i]) {
            int len = strlen(todo_list[i]);
            answer[j] = (char*)malloc((len + 1) * sizeof(char));
            if (answer[j] == NULL) {
                for (int k = 0; k < j; k++) free(answer[k]);
                free(answer);
                return NULL;
            }
            
            strcpy(answer[j], todo_list[i]);
            j++;
        }
    }
    
    return answer;
}