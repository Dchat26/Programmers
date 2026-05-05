#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < goal_len; i++) {
        if (idx1 < cards1_len && strcmp(goal[i], cards1[idx1]) == 0) {
            idx1++;
        }
        else if (idx2 < cards2_len && strcmp(goal[i], cards2[idx2]) == 0) {
            idx2++;
        }
        else {
            return "No";
        }
    }
    
    return "Yes";
}