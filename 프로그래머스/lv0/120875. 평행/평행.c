#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_parallel(int p1[], int p2[], int p3[], int p4[]) {
    long long dy1 = p2[1] - p1[1];
    long long dx1 = p2[0] - p1[0];
    long long dy2 = p4[1] - p3[1];
    long long dx2 = p4[0] - p3[0];
    
    return dy1 * dx2 == dy2 * dx1;
}

int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    if (is_parallel(dots[0], dots[1], dots[2], dots[3])) return 1;
    if (is_parallel(dots[0], dots[2], dots[1], dots[3])) return 1;
    if (is_parallel(dots[0], dots[3], dots[1], dots[2])) return 1;
    
    return 0;
}