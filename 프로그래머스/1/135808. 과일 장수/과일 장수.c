#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int solution(int k, int m, int score[], size_t score_len) {
    qsort(score, score_len, sizeof(int), compare);
    
    int answer = 0;
    for (int i = m - 1; i < score_len; i += m) {
        answer += score[i] * m;
    }
    
    return answer;
}