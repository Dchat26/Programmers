#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int limit, int power) {
    int* divisor = (int*)calloc((number + 1), sizeof(int));
    if (divisor == NULL) return -1;
    
    for (int i = 1; i <= number; i++) {
        for (int j = i; j <= number; j += i) {
            divisor[j]++;
        }
    }
    
    int total = 0;
    for (int i = 1; i <= number; i++) {
        if (divisor[i] > limit) total += power;
        else total += divisor[i];
    }
    
    return total;
}