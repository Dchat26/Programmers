#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int common[], size_t common_len) {
    if (common[1] - common[0] == common[2] - common[1]) {
        int d = common[1] - common[0];
        
        return common[common_len - 1] + d;
    }
    else {
        int r = common[1] / common[0];
        
        return common[common_len - 1] * r;
    }
}