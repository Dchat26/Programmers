#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int a = 0, b = 1;
    
    for (int i = 2; i <= n; i++) {
        int next = (a + b) % 1234567;
        a = b;
        b = next;
    }
    
    return b;
}