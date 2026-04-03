#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* myString) {
    int len = strlen(myString);
    int count = 1;
    for (int i = 0; i < len; i++) {
        if (myString[i] == 'x') count++;
    }
    
    int* answer = (int*)malloc(count * sizeof(int));
    if (answer == NULL) return NULL;
    
    int idx = 0;
    int current_len = 0;
    for (int i = 0, j = 0; i <= len; i++) {
        if (myString[i] == 'x' || myString[i] == '\0') {
            answer[idx++] = current_len; 
            current_len = 0;
        }
        else {
            current_len++;
        }
    }
    
    return answer;
}