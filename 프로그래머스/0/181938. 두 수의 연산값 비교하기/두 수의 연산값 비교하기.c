#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int temp = b;
    int digit = 1;
    while(temp > 0) {
        digit *= 10;
        temp /= 10;
    }
    
    int ab = a * digit + b;
    int ab2 = 2 * a * b;
    
    return (ab > ab2) ? ab : ab2;
}