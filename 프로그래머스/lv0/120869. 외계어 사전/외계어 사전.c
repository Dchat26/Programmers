#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    for (int i = 0; i < dic_len; i++) {
        int total_match = 0;
        
        for (int j = 0; j < spell_len; j++) {
            int found = 0;
            for (int k = 0; k < strlen(dic[i]); k++) {
                if (dic[i][k] == spell[j][0]) {
                    found = 1;
                    break;
                }
            }
            if (found) total_match++;
        }
        if (total_match == spell_len && strlen(dic[i]) == spell_len) {
            return 1;
        }
    }
    
    return 2;
}