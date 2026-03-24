#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    int coffee = money / 5500;
    int rest = money % 5500;
    
    int* answer = (int*)malloc(2 * sizeof(int));
    if (answer == NULL) return NULL;
    
    answer[0] = coffee;
    answer[1] = rest;
    
    return answer;
}