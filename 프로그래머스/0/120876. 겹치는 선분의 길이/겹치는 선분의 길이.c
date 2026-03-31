#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int line[200] = {0};
    
    for (int i = 0; i < lines_rows; i++) {
        int start = lines[i][0];
        int end = lines[i][1];
    
        int min = (start < end) ? start : end;
        int max = (start < end) ? end : start;
    
        for (int j = min; j < max; j++) {
            line[j + 100]++;
        }
    }
    
    int answer = 0;
    for (int i = 0; i < 200; i++) {
        if (line[i] >= 2) answer++;
    }
    
    return answer;
}