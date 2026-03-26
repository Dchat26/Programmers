#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int box[], size_t box_len, int n) {
    int dicex = box[0] / n;
    int dicez = box[1] / n;
    int dicey = box[2] / n;
    
    int answer = dicex * dicez * dicey;
    
    return answer;
} 