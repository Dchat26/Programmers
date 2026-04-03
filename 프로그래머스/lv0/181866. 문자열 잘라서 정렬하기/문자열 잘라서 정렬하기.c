#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return strcmp(*(char**)a, *(char**)b);
}

char** solution(const char* myString) {
    int count = 0;
    char* check_temp = strdup(myString);
    char* p = strtok(check_temp, "x");
    while (p != NULL) {
        count++;
        p = strtok(NULL, "x");
    }
    free(check_temp);
    
    char** answer = (char**)malloc(count * sizeof(char*));
    if (answer == NULL) return NULL;
    
    char* temp = strdup(myString);
    char* ptr = strtok(temp, "x");
    int j = 0;
    while (ptr != NULL) {
        answer[j] = (char*)malloc((strlen(ptr) + 1) * sizeof(char));
        if (answer[j] == NULL) {
            for (int i = 0; i < j; i++) {
                free(answer[i]);
            }
            break;
        }
        
        strcpy(answer[j], ptr);
        j++;
        ptr = strtok(NULL, "x");
    }
    
    qsort(answer, j, sizeof(char*), compare);
    
    free(temp);
    return answer;
}