#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
    int* answer = (int*)calloc(52, sizeof(int));
    if (answer == NULL) return NULL;
    
    int len = strlen(my_string);
    for (int i = 0; i < len; i++) {
        if (my_string[i] >= 'A' && my_string[i] <= 'Z') {
            answer[my_string[i] - 'A']++;
        }
        else answer[my_string[i] - 'a' + 26]++;
    }
    
    return answer;
}