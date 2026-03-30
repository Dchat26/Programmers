#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    int min = (sides[0] < sides[1]) ? sides[0] : sides[1];
    
    return (min * 2) - 1;
}