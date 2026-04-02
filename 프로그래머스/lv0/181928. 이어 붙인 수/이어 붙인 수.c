#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    long long even = 0;
    long long odd = 0;
    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) even = even * 10 + num_list[i];
        else odd = odd * 10 + num_list[i];
    }
    
    int answer = even + odd;
    
    return answer;
}