#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> 

int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    
    for (size_t i = 0; i < babbling_len; i++) {
        const char* word = babbling[i];
        
        int prev = 0; 
        bool is_valid = true;
        while (*word != '\0') {
            if (strncmp(word, "aya", 3) == 0 && prev != 1) {
                prev = 1;
                word += 3;
            } 
            else if (strncmp(word, "ye", 2) == 0 && prev != 2) {
                prev = 2;
                word += 2;
            } 
            else if (strncmp(word, "woo", 3) == 0 && prev != 3) {
                prev = 3;
                word += 3;
            } 
            else if (strncmp(word, "ma", 2) == 0 && prev != 4) {
                prev = 4;
                word += 2;
            } 
            else {
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            answer++;
        }
    }
    
    return answer;
}