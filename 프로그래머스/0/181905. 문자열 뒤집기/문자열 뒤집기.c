#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int s, int e) {
    char* answer = strdup(my_string);
    if (answer == NULL) return NULL;
    
    int count = (e - s + 1) / 2;
    for (int i = 0; i < count; i++) {
        char temp = answer[s + i];
        answer[s + i] = answer[e - i];
        answer[e - i] = temp;
    }
    
    return answer;
}