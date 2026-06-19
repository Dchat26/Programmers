#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
} Point;

Point get_pos(int num, int w) {
    int X = num - 1;
    int row = X / w;
    int col = 0;
    
    if (row % 2 == 1) {
        col = (w - 1) - (X % w);
    } else {
        col = X % w;
    }
    
    Point p = {row, col};
    return p;
}

int solution(int n, int w, int num) {
    Point target = get_pos(num, w);
    
    int total_rows = (n / w) + (n % w != 0 ? 1 : 0);
    
    int answer = 0;
    
    for (int r = target.row; r < total_rows; r++) {
        int current_box_num = 0;
        
        if (r % 2 == 1) {
            current_box_num = r * w + (w - 1 - target.col) + 1;
        } else {
            current_box_num = r * w + target.col + 1;
        }
        
        if (current_box_num <= n) {
            answer++;
        }
    }
    
    return answer;
}