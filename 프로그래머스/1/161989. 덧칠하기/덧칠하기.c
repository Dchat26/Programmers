#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int m, int section[], size_t section_len) {
    int count = 0;
    int painted_end = 0;
    
    for (size_t i = 0; i < section_len; i++) {
        if (section[i] > painted_end) {
            count++;
            
            painted_end = section[i] + m - 1; 
        }
    }
    
    return count;
}