#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int target;

int compare(const void* a, const void* b) {
    if (abs(*(int*)a - target) == abs(*(int*)b - target)) return *(int*)b - *(int*)a;
    return abs(*(int*)a - target) - abs(*(int*)b - target);
}

int* solution(int numlist[], size_t numlist_len, int n) {
    target = n;
    
    int* answer = (int*)malloc(numlist_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < numlist_len; i++) {
        answer[i] = numlist[i];
    }
    
    qsort(answer, numlist_len, sizeof(int), compare);
    
    return answer;
}