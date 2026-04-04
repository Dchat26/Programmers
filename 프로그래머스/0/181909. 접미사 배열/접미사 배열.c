#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    
    return strcmp(str1, str2);
}

char** solution(const char* my_string) {
    int len = strlen(my_string);
    char** answer = (char**)malloc(len * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        answer[i] = (char*)malloc((len - i + 1) * sizeof(char));
        if (answer[i] == NULL) {
                for (int k = 0; k < i; k++) free(answer[k]);
                free(answer);
                return NULL;
            }
        
        int idx = 0;
        for (int j = i; j < len; j++) answer[i][idx++] = my_string[j];
        answer[i][idx] = '\0';
    }
    
    qsort(answer, len, sizeof(char*), compare);
    
    return answer;
}