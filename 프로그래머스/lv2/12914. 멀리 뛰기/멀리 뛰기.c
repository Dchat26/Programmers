#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    long long prev = 1, curr = 2;
    
    if (n == 1) return 1;
    
    for (int i = 3; i <= n; i++) {
        long long next_val = (prev + curr) % 1234567;
        
        prev = curr;
        curr = next_val;
    }
    
    return curr;
}