#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    int len = strlen(my_string);
    
    char* answer = (char*)malloc((len * n + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int offset = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < n; j++) {
            offset += sprintf(answer + offset, "%c", my_string[i]);
        }
    }
    
    return answer;
}