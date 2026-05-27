#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(char* want[], size_t want_len, int number[], size_t number_len, char* discount[], size_t discount_len) {
    int answer = 0;
    
    int total = 0;
    for (size_t i = 0; i < number_len; i++) {
        total += number[i];
    }

    for (size_t i = 0; i <= discount_len - total; i++) {
        int temp_counts[10] = {0}; 

        for (int j = 0; j < total; j++) {
            char* target = discount[i + j];

            for (size_t k = 0; k < want_len; k++) {
                if (strcmp(target, want[k]) == 0) {
                    temp_counts[k]++;
                    break;
                }
            }
        }

        bool is_match = true;
        for (size_t k = 0; k < want_len; k++) {
            if (temp_counts[k] != number[k]) {
                is_match = false;
                break;
            }
        }

        if (is_match) answer++;
    }

    return answer;
}