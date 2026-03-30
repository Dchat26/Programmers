#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long combination(int n, int r) {
    if (r == 0 || n == r) return 1;
    if (r > n / r) r = n - r;
    
    static long long memo[31][31] = {0};
    if (memo[n][r] != 0) return memo[n][r];
    
    return memo[n][r] = combination(n - 1, r - 1) + combination(n - 1, r);
}

long long solution(int balls, int share) {
    return combination(balls, share);
}