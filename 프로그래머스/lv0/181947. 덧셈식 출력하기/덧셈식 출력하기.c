#include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    
    printf("%d + %d = %d\n", a, b, a + b);
    
    return 0;
}