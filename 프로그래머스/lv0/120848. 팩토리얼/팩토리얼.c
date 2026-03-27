#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 1;
    while(i <= n) {
        i *= ++answer;
    }
    
    return answer - 1;
}