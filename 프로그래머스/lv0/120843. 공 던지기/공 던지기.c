#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len, int k) {
    int idx = ((k - 1) * 2) % numbers_len; 
    
    return numbers[idx];
}