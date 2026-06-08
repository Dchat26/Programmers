#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* wallpaper[], size_t wallpaper_len) {
    int lux = 51, luy = 51;
    int rdx = -1, rdy = -1;
    
    for (int i = 0; i < wallpaper_len; i++) {
        for (int j = 0; j < strlen(wallpaper[i]); j++) {
            if (wallpaper[i][j] == '#') {
                lux = (lux < i) ? lux : i;
                luy = (luy < j) ? luy : j;
                rdx = (rdx < i + 1) ? i + 1 : rdx;
                rdy = (rdy < j + 1) ? j + 1 : rdy;
            }
        }
    }
    
    int* answer = (int*)malloc(4 * sizeof(int));
    if (answer == NULL) return NULL;
    
    answer[0] = lux;
    answer[1] = luy;
    answer[2] = rdx;
    answer[3] = rdy;
    
    return answer;
}