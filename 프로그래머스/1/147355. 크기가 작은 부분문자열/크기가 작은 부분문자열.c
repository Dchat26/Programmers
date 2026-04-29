#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* t, const char* p) {
    int tlen = strlen(t);
    int plen = strlen(p);
    
    char temp[19];
    int count = 0;
    for (int i = 0; i <= (tlen - plen); i++) {
        strncpy(temp, t + i, plen);
        temp[plen] = '\0';
        
        if (atoll(temp) <= atoll(p)) count++;
    }
    
    return count;
}