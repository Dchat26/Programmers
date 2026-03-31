#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b > 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(2 * sizeof(int));
    if (answer == NULL) return NULL;
    
    int up = (numer1 * denom2) + (numer2 * denom1);
    int down = denom1 * denom2;
    
    int g = gcd(up, down);
    
    answer[0] = up / g;
    answer[1] = down / g;
    
    return answer;
}