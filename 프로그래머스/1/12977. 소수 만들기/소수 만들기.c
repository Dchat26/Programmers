#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int nums[], size_t nums_len) {
    int prime[3000];
    for (int i = 0; i < 3000; i++) {
        prime[i] = 1;
    }
    
    prime[0] = 0;
    prime[1] = 0;
    
    for (int i = 2; i * i < 3000; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= 3000; j += i) {
                prime[j] = 0;
            }
        }
    }
    
    int answer = 0;
    for (int i = 0; i < nums_len - 2; i++) {
        for (int j = i + 1; j < nums_len - 1; j++) {
            for (int k = j + 1; k < nums_len; k++) {
                int val = nums[i] + nums[j] + nums[k];
                
                if (prime[val]) answer++;
            }
        }
    }
    
    return answer;
}