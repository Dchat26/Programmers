#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int solution(int k, int tangerine[], size_t tangerine_len) {
    int max_val = 0;
    for (int i = 0; i < tangerine_len; i++) {
        if (max_val < tangerine[i]) max_val = tangerine[i];
    }
    
    int* tlist = (int*)calloc(max_val + 1, sizeof(int));
    if (tlist == NULL) return -1;
    
    for (int i = 0; i < tangerine_len; i++) {
        tlist[tangerine[i]]++;
    }
    
    qsort(tlist, max_val + 1, sizeof(int), compare);
    
    int answer = 0;
    for (int i = 0; i <= max_val; i++) {
        answer++;
        k -= tlist[i];
        
        if (k <= 0) break;
    }
    
    free(tlist);
    
    return answer;
}