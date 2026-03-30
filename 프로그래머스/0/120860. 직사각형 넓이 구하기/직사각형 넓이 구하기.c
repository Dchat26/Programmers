#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int xmax = dots[0][0];
    int xmin = dots[0][0];
    int ymax = dots[0][1];
    int ymin = dots[0][1];
    for (int i = 1; i < dots_rows; i++) {
        if (xmax < dots[i][0]) xmax = dots[i][0];
        if (xmin > dots[i][0]) xmin = dots[i][0];
        if (ymax < dots[i][1]) ymax = dots[i][1];
        if (ymin > dots[i][1]) ymin = dots[i][1];
    }
    int x = xmax - xmin;
    int y = ymax - ymin;
    
    return x * y;
}