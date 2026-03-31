#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool has_three(int num) {
    while (num > 0) {
        if (num % 10 == 3) return true;
        num /= 10;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    
    for (int i = 0; i < n; i++) {
        answer++;
        
        while (answer % 3 == 0 || has_three(answer)) answer++;
    }
    
    return answer;
}

