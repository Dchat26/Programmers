#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return *(char*)b - *(char*)a;
}

char* solution(const char* s) {
    int len = strlen(s);
    char* answer = strdup(s);
    
    qsort(answer, len, sizeof(char), compare);
    
    return answer;
}