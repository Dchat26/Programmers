#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* A, const char* B) {
    int len = strlen(A);

    if (strcmp(A, B) == 0) return 0;
    
    for (int i = 1; i < len; i++) {
        char temp[101];
        for (int j = 0; j < len; j++) {
            temp[j] = A[(j - i + len) % len];
        }
        temp[len] = '\0';
        
        if (strcmp(temp, B) == 0) return i;
    }
    
    return -1;
}