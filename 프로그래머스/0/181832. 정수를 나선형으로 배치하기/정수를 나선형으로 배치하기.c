#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    int** answer = (int**)malloc(n * sizeof(int*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < n; i++) {
        answer[i] = (int*)calloc(n, sizeof(int));
    }
    
    int dr[4] = {0, 1, 0, -1}; 
    int dc[4] = {1, 0, -1, 0}; 
    
    int r = 0, c = 0;  
    int dir = 0; 
    
    for (int val = 1; val <= n * n; val++) {
        answer[r][c] = val;
        
        int nr = r + dr[dir];
        int nc = c + dc[dir];
        
        if (nr < 0 || nr >= n || nc < 0 || nc >= n || answer[nr][nc] != 0) {
            dir = (dir + 1) % 4; 
            nr = r + dr[dir];  
            nc = c + dc[dir];
        }
        
        r = nr;
        c = nc;
    }
    
    return answer;
}