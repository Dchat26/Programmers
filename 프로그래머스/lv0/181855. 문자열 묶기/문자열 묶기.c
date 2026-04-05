#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* strArr[], size_t strArr_len) {
    int arrlen[31] = {0};
    
    for (size_t i = 0; i < strArr_len; i++) {
        arrlen[strlen(strArr[i])]++;
    }
    
    int max_val = arrlen[1];
    for (int i = 2; i < 31; i++) {
        if (max_val < arrlen[i]) max_val = arrlen[i];
    }
    
    return max_val;
}