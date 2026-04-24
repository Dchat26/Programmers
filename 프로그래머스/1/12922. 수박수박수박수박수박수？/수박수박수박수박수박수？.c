#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc((n * 3 + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) strcpy(answer + (i * 3), "수");
        else strcpy(answer + (i * 3), "박");
    }
    return answer;
}