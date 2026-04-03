#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    int len = strlen(myString);
    
    char* temp = (char*)malloc((len + 1) * sizeof(char));
    if (temp == NULL) return -1;
    
    for (int i = 0; i < len; i++) {
        if (myString[i] == 'A') temp[i] = 'B';
        else temp[i] = 'A';
    }
    temp[len] = '\0';
    
    if (strstr(temp, pat) == NULL) {
        free(temp);
        return 0;
    }
    else {
        free(temp);
        return 1;
    }
}