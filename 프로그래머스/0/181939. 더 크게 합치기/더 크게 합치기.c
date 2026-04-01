#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    char ab[20], ba[20];
    
    sprintf(ab, "%d%d", a, b);
    sprintf(ba, "%d%d", b, a);
    
    int abi = atoi(ab);
    int bai = atoi(ba);
    
    return (abi > bai) ? abi : bai;
}