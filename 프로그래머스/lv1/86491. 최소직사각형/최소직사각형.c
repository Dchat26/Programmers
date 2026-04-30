#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int w = 0;
    int h = 0;
    for (int i = 0; i < sizes_rows; i++) {
        int maxval = (sizes[i][0] < sizes[i][1]) ? sizes[i][1] : sizes[i][0]; 
        int minval = (sizes[i][0] < sizes[i][1]) ? sizes[i][0] : sizes[i][1];
        
        w = (w < maxval) ? maxval : w;
        h = (h < minval) ? minval : h;
    }
    
    return w * h;
}