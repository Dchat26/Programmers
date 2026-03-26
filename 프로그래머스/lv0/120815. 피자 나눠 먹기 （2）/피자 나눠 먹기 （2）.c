#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    int pizza = 6;
    
    while (pizza % n != 0) {
        answer++;
        pizza = 6 * answer;
    }
    
    return answer;
}