#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int* answer = (int*)malloc(20 * sizeof(int));
    if (answer == NULL) return NULL;
    
    if (n == 0) {
        answer[0] = 0;
        
        return answer;
    }
    
    int i = 0;
    while (n > 0) {
        answer[i++] = n % 10;
        n /= 10;
    }
    
    return answer;
}