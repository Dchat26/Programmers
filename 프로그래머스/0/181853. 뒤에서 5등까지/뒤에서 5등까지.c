#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(5 * sizeof(int));
    if (answer == NULL) return NULL;
    
    qsort(num_list, num_list_len, sizeof(int), compare);
    
    for (int i = 0; i < 5; i++) {
        answer[i] = num_list[i];
    }
    
    return answer;
}