#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == '(') count++;
        else {
            if (count > 0) count--;
            else return false;
        }
    }
    
    return count == 0;
}