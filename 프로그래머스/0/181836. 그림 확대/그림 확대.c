#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* picture[], size_t picture_len, int k) {
    char** answer = (char**)malloc((k * picture_len) * sizeof(char*));
    if (answer == NULL) return NULL;
    
    int idx1 = 0;
    for (int i = 0; i < picture_len; i++) {
        for (int j = 0; j < k; j++) {
            answer[idx1] = (char*)malloc((k * strlen(picture[i]) + 1) * sizeof(char));
            
            int len = strlen(picture[i]);
            int idx2 = 0;
            for (int m = 0; m < len; m++) {
                for (int n = 0; n < k; n++) {
                    answer[idx1][idx2++] = picture[i][m];
                }
            }
            answer[idx1][idx2] = '\0';
            idx1++;
        }
    }
    
    return answer;
}