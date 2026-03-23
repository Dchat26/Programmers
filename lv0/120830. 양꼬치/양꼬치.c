#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int service = (int)(n / 10);
    int serk = k - service;
    
    int answer = (n * 12000) + (serk * 2000);
        
    return answer;
}