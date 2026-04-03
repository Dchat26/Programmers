#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len, int n) {
    int answer = 0;
    
    int i = 0;
    while (answer <= n) {
        answer += numbers[i++];
    }
    
    return answer;
}