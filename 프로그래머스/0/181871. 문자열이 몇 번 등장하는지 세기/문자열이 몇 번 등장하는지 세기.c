#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    char* state = strstr(myString, pat);
    int count = 0;
    while (state != NULL) {
        count++;
        state = strstr(state + 1, pat);
    }
    
    return count;
}