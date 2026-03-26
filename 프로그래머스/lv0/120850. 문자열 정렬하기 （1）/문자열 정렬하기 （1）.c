#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* solution(const char* my_string) {
    int n = 0;
    int len = 0;
    while (my_string[n] != '\0') {
        len++;
        n++;
    }
    
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(my_string[i])) {
            answer[j++] = my_string[i] - '0'; 
        }
    }
    
    qsort(answer, j, sizeof(int), compare);
    
    return answer;
}