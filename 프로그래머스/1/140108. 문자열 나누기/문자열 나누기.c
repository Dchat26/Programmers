#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s) {
    int answer = 0;
    int m = 0;
    int n = 0;
    char mc;
    for (int i = 0; s[i] != '\0'; i++) {
        if (m == 0) {
            mc = s[i];
            m++;
            continue;
        }
        
        if (mc == s[i]) {
            m++;
        }
        else {
            n++;
        }
        
        if (m == n) {
            answer++;
            m = 0;
            n = 0;
        }
    }
    
    if (m > 0) answer++;
    
    return answer;
}