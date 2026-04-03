#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_string) {
    char* check_temp = strdup(my_string);
    char* p = strtok(check_temp, " ");
    int count = 0;
    while (p != NULL) {
        count++;
        
        p = strtok(NULL, " ");
    }
    free(check_temp);
    
    char** answer = (char**)malloc(count * sizeof(char*));
    if (answer == NULL) return NULL;
    
    char* temp = strdup(my_string);
    char* ptr = strtok(temp, " ");
    int idx = 0;
    while (ptr != NULL) {
        int len = strlen(ptr);
        answer[idx] = (char*)malloc((len + 1) * sizeof(char));
        if (answer[idx] == NULL) {
            for (int i = 0; i < idx; i++) {
                free(answer[idx]);
                break;
            }
        }
        else {
            strcpy(answer[idx], ptr);
            idx++;
        }
        
        ptr = strtok(NULL, " ");
    }
    
    free(temp);
    return answer;
}