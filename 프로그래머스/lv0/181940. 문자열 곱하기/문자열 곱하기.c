#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int k) {
    int len = strlen(my_string);
    char* answer = (char*)malloc((len * k + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    char* ptr = answer;
    
    while(k--) {
        ptr += sprintf(ptr, "%s", my_string);
    }
    
    return answer;
}