#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    int len = strlen(my_string);
    int idx = len - n;
    
    char* answer = (char*)malloc((n + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (int i = idx; i < len; i++) {
        answer[j++] = my_string[i];
    }
    answer[j] = '\0';
    
    return answer;
}