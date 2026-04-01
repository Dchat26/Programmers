#include <stdio.h>
#include <string.h>

#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    if (scanf("%s %s", s1, s2) != 2) return 0;
    
    char answer[30];
    sprintf(answer, "%s%s", s1, s2);
    
    printf("%s\n", answer);

    return 0;
}