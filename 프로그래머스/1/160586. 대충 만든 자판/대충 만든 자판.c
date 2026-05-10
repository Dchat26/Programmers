#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* keymap[], size_t keymap_len, const char* targets[], size_t targets_len) {
    int* answer = (int*)malloc(targets_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int min_press[26];
    for (int i = 0; i < 26; i++) {
        min_press[i] = 10000;
    }
    
    for (size_t i = 0; i < keymap_len; i++) {
        for (int j = 0; keymap[i][j] != '\0'; j++) {
            int char_idx = keymap[i][j] - 'A';
            
            if (j + 1 < min_press[char_idx]) {
                min_press[char_idx] = j + 1;
            }
        }
    }
    
    for (size_t i = 0; i < targets_len; i++) {
        int count = 0;
        bool possible = true;
        
        for (int j = 0; targets[i][j] != '\0'; j++) {
            int char_idx = targets[i][j] - 'A';
            
            if (min_press[char_idx] == 10000) {
                possible = false;
                break;
            }
            
            count += min_press[char_idx];
        }
        answer[i] = possible ? count : -1;
    }
    
    return answer;
}