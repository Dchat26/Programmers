#include <stdio.h>
#include <string.h>

#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    if (scanf("%s", s1) != 1) return 0;
    
    int len = strlen(s1);
    for (int i = 0; i < len; i++) printf("%c\n", s1[i]);
    
    return 0;
}