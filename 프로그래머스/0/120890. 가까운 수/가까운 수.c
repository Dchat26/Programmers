#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len, int n) {
    int close = 100;
    int answer = 101;
    for (int i = 0; i < array_len; i++) {
        int range = abs(array[i] - n);
        if (close > range) {
            close = range;
            answer = array[i];
        } 
        else if (close == range) {
            if (answer > array[i]) {
                answer = array[i];
            }
        }
    }
    
    return answer;
}