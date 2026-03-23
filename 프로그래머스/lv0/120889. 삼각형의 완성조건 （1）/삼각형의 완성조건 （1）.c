#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int sides[], size_t sides_len) {
    int max_val = 0;
    int sidesum = 0;
    for (int i = 0; i < sides_len; i++) {
        sidesum += sides[i];
        if (sides[i] > max_val) max_val = sides[i];
    }
    
    int answer = 0;
    if (2 * max_val < sidesum) answer = 1;
    else answer = 2;
    
    return answer;
}