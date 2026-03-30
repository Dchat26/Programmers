#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int solution(const char* my_string) {
    char* temp = (char*)malloc((strlen(my_string) + 1) * sizeof(char));
    if (temp == NULL) return -1;
    strcpy(temp, my_string);
    
    char* ptr = strtok(temp, " ");
    
    int answer = 0;
    int op = 1;
    while (ptr != NULL) {
        if (strcmp(ptr, "+") == 0) op = 1;
        else if (strcmp(ptr, "-") == 0) op = -1;
        else answer += (atoi(ptr) * op);
        
        ptr = strtok(NULL, " ");
    }
    
    free(temp);
    return answer;
}