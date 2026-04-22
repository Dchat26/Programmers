#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(10 * sizeof(char));
    if (answer == NULL) return NULL;
    
    if (num % 2 == 0) {
        sprintf(answer, "%s", "Even");
    }
    else {
        sprintf(answer, "%s", "Odd");
    }
    
    return answer;
}