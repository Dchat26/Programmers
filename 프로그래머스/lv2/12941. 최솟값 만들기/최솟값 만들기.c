#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a < *(int*)b;
}

int Rcompare(const void* a, const void* b) {
    return *(int*)a > *(int*)b;
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    qsort(A, A_len, sizeof(int), compare);
    qsort(B, B_len, sizeof(int), Rcompare);
    
    int answer = 0;
    for (int i = 0; i < A_len; i++) {
        answer += A[i] * B[i];
    }
    
    return answer;
}