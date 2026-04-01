#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n, const char* control) {
    int len = strlen(control);
    int answer = n;
    for (int i = 0; i < len; i++) {
        switch(control[i]) {
            case 'w':
                answer++;
                break;
            case 's':
                answer--;
                break;
            case 'd':
                answer += 10;
                break;
            case 'a':
                answer -= 10;
                break;
        }
    }
    
    return answer;
}