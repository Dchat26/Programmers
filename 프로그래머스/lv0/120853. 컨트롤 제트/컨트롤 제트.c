#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

int solution(const char* s) {
    char * copy = (char*)malloc(strlen(s) * sizeof(char));
    if (copy == NULL) return -1;
    strcpy(copy, s);
    
    char* ptr = strtok(copy, " ");
    int past_num = 0;
    int answer = 0;
    while (ptr != NULL) {
        if (strcmp(ptr, "Z") != 0) {
            int num = atoi(ptr);
            past_num = num;
            answer += num;
        } 
        else {
            answer -= past_num;
        }
        
        ptr = strtok(NULL, " ");
    }
    
    free(copy);
    return answer;
}