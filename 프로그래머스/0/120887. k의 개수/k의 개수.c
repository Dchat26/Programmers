#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    for (int a = i; a <= j; a++) {
        int target = a;
        while (target > 0) {
            if (target % 10 == k) answer++;
            
            target /= 10;
        }
    }
    
    return answer;
}