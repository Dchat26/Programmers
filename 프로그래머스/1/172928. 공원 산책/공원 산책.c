#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* park[], size_t park_len, const char* routes[], size_t routes_len) {
    int H = park_len;
    int W = strlen(park[0]);
    
    int r = 0, c = 0;
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (park[i][j] == 'S') {
                r = i;
                c = j;
                break;
            }
        }
    }
    
    for (size_t i = 0; i < routes_len; i++) {
        char dir = routes[i][0];
        int dist = routes[i][2] - '0';
        
        int dr = 0, dc = 0;
        if (dir == 'N') dr = -1;
        else if (dir == 'S') dr = 1;
        else if (dir == 'W') dc = -1;
        else if (dir == 'E') dc = 1;
        
        int temp_r = r, temp_c = c;
        bool is_valid = true;
        
        for (int d = 0; d < dist; d++) {
            temp_r += dr;
            temp_c += dc;
            
            if (temp_r < 0 || temp_r >= H || temp_c < 0 || temp_c >= W || park[temp_r][temp_c] == 'X') {
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            r = temp_r;
            c = temp_c;
        }
    }
    
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = r;
    answer[1] = c;
    
    return answer;
}