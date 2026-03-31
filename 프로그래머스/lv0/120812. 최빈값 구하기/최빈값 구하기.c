#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len) {
    int count[1000] = {0};
    
    for (int i = 0; i < array_len; i++) {
        count[array[i]]++;
    }
    
    int max_val = 0;
    for (int i = 0; i < 1000; i++) {
        if (max_val < count[i]) max_val = count[i];
    }
    
    int max_idx = 0;
    int max_count = 0;
    for (int i = 0; i < 1000; i++) {
        if (count[i] == max_val) {
            max_idx = i;
            max_count++;
            if (max_count == 2) return -1;
        }
    }
    
    return max_idx;
}