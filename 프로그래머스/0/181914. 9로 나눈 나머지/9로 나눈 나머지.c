#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* number) {
    int len = strlen(number);
    
    int answer = 0;
    for (int i = 0; i < len; i++) {
        answer += number[i] - '0';
    }
    
    return answer % 9;
}