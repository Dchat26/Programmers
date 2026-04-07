#include <stdio.h>
#include <string.h>
#define LEN_INPUT 30

int main(void) {
    char s1[LEN_INPUT];
    if (scanf("%s", s1) != 1) return 0;
    
    int len = strlen(s1);
    for (int i = 0; i < len; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') s1[i] = s1[i] - ('a' - 'A');
        else s1[i] = s1[i] + ('a' - 'A');
    }
    
    printf("%s\n", s1);
    
    return 0;
}
