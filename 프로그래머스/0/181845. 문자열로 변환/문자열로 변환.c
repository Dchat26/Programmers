#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(10 * sizeof(char));
    if (answer == NULL) return NULL;
    
    snprintf(answer, 10, "%d", n);
    
    return answer;
}