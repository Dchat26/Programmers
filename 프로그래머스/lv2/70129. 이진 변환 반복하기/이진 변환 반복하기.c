#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int* answer = (int*)malloc(2 * sizeof(int));
    int loop_cnt = 0;
    int zero_cnt = 0;
    
    char* current_s = (char*)malloc(150005 * sizeof(char));
    strcpy(current_s, s);
    
    while (strcmp(current_s, "1") != 0) {
        loop_cnt++;
        
        int current_zeros = 0;
        int len = 0;
        
        for (int i = 0; current_s[i] != '\0'; i++) {
            if (current_s[i] == '0') current_zeros++;
            len++;
        }
        
        zero_cnt += current_zeros;
        int next_len = len - current_zeros;
        
        int idx = 0;
        char temp_binary[32];
        
        while (next_len > 0) {
            temp_binary[idx++] = (next_len % 2) + '0';
            next_len /= 2;
        }
        
        for (int i = 0; i < idx; i++) {
            current_s[i] = temp_binary[idx - 1 - i];
        }
        current_s[idx] = '\0';
    }
    free(current_s);
    
    answer[0] = loop_cnt;
    answer[1] = zero_cnt;
    
    return answer;
}