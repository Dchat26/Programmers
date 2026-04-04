#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int date1[], size_t date1_len, int date2[], size_t date2_len) {
    int* a = date1;
    int* b = date2;
    
    int c0 = b[0] - a[0];
    int c1 = b[1] - a[1];
    int c2 = b[2] - a[2];
    
    if (c0 > 0) return 1;
    else if (c0 < 0) return 0;
    else if (c1 > 0) return 1;
    else if (c1 < 0) return 0;
    else if (c2 > 0) return 1;
    else if (c2 < 0) return 0;
    else return 0;
}