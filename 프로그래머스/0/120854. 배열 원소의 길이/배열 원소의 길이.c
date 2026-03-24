#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* solution(const char* strlist[], size_t strlist_len) {
    int* answer = (int*)malloc(strlist_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < strlist_len; i++) {
        answer[i] = strlen(strlist[i]);
    }
    
    return answer;
}