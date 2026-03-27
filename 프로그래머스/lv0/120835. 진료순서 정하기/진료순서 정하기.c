#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}


int* solution(int emergency[], size_t emergency_len) {
    int* esort = (int*)malloc(emergency_len * sizeof(int));
    if (esort == NULL) return NULL;
    
    for (int i = 0; i < emergency_len; i++) {
        esort[i] = emergency[i];
    }
    
    qsort(esort, emergency_len, sizeof(int), compare);
    
    int* answer = (int*)malloc(emergency_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < emergency_len; i++) {
        for (int j = 0; j < emergency_len; j++) {
            if (emergency[i] == esort[j]) {
                answer[i] = j + 1;
            }
        }
    }
    
    free(esort);
    return answer;
}