#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int compare(const void* a, const void* b) {
    return *(char*)a - *(char*)b;
}

char* solution(const char* my_string) {
    int len = strlen(my_string);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        if (isupper(my_string[i])) {
            answer[i] = my_string[i] + ('a' - 'A');
            continue;
        }
        
        answer[i] = my_string[i];
    }
    answer[len] = '\0';
    
    qsort(answer, len, sizeof(char), compare);
    
    return answer;
}