#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while(b > 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    
    return a;
}

int solution(int a, int b) {
    b /= gcd(a, b);
    
    while (b % 2 == 0) {
        b /= 2;
    }
    while (b % 5 == 0) {
        b /= 5;
    }
    
    return (b == 1) ? 1 : 2;
}