#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rny_string) {
    int len = strlen(rny_string);
    
    int total_len = 0;
    for (int i = 0; i < len; i++) {
        if (rny_string[i] == 'm') total_len += 2;
        else total_len++;
    }
    
    char* answer = (char*)malloc((total_len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    char* ptr = answer;
    
    for (int i = 0; i < len; i++) {
        if (rny_string[i] == 'm') {
            ptr += sprintf(ptr, "rn");
        }
        else {
            ptr += sprintf(ptr, "%c", rny_string[i]);
        }
    }
    
    return answer;
}