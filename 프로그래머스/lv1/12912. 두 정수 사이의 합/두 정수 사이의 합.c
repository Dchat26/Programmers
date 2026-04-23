#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    return 1LL * (a + b) * (abs(a - b) + 1) / 2;
}