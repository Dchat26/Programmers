#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    char result[20];
    int idx = 0;
    while(n > 0) {
        result[idx++] = (n % 3) + '0';
        n /= 3;
    }
    result[idx] = '\0';
    
    return strtol(result, NULL, 3);
}