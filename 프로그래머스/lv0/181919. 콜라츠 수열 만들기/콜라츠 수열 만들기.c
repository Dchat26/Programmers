#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int target = n;
    
    int count = 1;
    while (target != 1) {
        count++;
        
        if (target % 2 == 0) target /= 2;
        else target = target * 3 + 1;
    }
    
    int* answer = (int*)malloc(count * sizeof(int));
    if (answer == NULL) return NULL;
    
    answer[0] = n;
    for (int i = 1; i < count; i++) {
        if (n % 2 == 0) {
            n /= 2;
            answer[i] = n;
        }
        else {
            n = n * 3 + 1;
            answer[i] = n;
        }
    }
    
    return answer;
}