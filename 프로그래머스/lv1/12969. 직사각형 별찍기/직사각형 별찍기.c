#include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    
    for (int i = 1; i <= a * b; i++) {
        printf("*");
        
        if (i % a == 0) printf("\n");
    }
    
    return 0;
}