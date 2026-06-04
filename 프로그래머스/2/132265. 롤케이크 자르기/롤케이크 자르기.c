#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int topping[], size_t topping_len) {
    int right[10001] = {0};
    for (int i = 0; i < topping_len; i++) {
        int target = topping[i];
        
        right[target]++;
    }
    
    int left[10001] = {0};
    int answer = 0;
    for (int i = 0; i < topping_len; i++) {
        int target = topping[i];
        
        left[target]++;
        right[target]--;
        
        int lsum = 0;
        int rsum = 0;
        for (int j = 1; j <= 10000; j++) {
            if (left[j] != 0) lsum++;
            if (right[j] != 0) rsum++;
        }
        
        if (lsum == rsum) answer++;
    }
    
    return answer;
}