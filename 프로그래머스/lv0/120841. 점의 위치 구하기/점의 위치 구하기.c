#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int dot[], size_t dot_len) {
    int x = dot[0];
    int y = dot[1];
    
    int answer = 0;
    
    if (x > 0 && y > 0) answer = 1;
    else if (x < 0 && y > 0) answer = 2;
    else if (x < 0 && y < 0) answer = 3;
    else if (x > 0 && y < 0) answer = 4;
    else return 0;
    
    return answer;
}