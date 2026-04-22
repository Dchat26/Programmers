#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int sum = 0;
    int target = x;
    while (target > 0) {
        sum += target % 10;
        target /= 10;
    }
    
    return x % sum == 0;
}