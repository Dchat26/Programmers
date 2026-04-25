#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long val = money;
    for (int i = 1; i <= count; i++) {
        val -= i * price;
    }
    
    if (val < 0) return -val;
    else return 0;
}