#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* babbling[], size_t babbling_len) {
    char* dict[] = {"aya", "ye", "woo", "ma"};
    
    int count = 0;
    for (int i = 0; i < babbling_len; i++) {
        char* temp = strdup(babbling[i]);
        int len = strlen(temp);
        
        for (int j = 0; j < 4; j++) {
            char* p = strstr(temp, dict[j]);
            
            if (p != NULL) {
                int word_len = strlen(dict[j]);
                for (int k = 0; k < word_len; k++) {
                    p[k] = ' ';
                }
            }
        }
        
        bool is_speakable = true;
        for (int i = 0; i < len; i++) {
            if(temp[i] != ' ') {
                is_speakable = false;
                break;
            }
        }
        
        if (is_speakable) {
            count++;
        }
        
        free(temp);
    }
    
    return count;
}