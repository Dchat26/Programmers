#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** board, size_t board_rows, size_t board_cols) {
    int** rboard = (int**)calloc(board_rows, sizeof(int*));
    if (rboard == NULL) return -1;
    
    for (int i = 0; i < board_rows; i++) {
        rboard[i] = (int*)calloc(board_cols, sizeof(int));
        if (rboard[i] == NULL) break;
    }
    
    int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    
    for (int i = 0; i < board_rows; i++) {
        for (int j = 0; j < board_cols; j++) {
            if (board[i][j] == 1) {
                for (int k = 0; k < 9; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    
                    if (nx >= 0 && nx < board_rows && ny >= 0 && ny < board_cols) {
                        rboard[nx][ny] = 1;
                    }
                }
            }
        }
    }
    
    int count = 0;
    for (int i = 0; i < board_rows; i++) {
        for (int j = 0; j < board_cols; j++) {
            if (rboard[i][j] == 0) count++;
        }
    }
    
    for (int i = 0; i < board_rows; i++) free(rboard[i]);
    free(rboard);
    
    return count;
}