#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a = 0;
    if (scanf("%s %d", s1, &a) != 2) return 0;
    
    while (a--) printf("%s", s1);
    printf("\n");
    
    return 0;
}