#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* binomial) {
    int len = strlen(binomial);
    char* temp = (char*)malloc((len + 1) * sizeof(char));
    if (temp == NULL) return -1;
    strcpy(temp, binomial);
    
    int answer = 0;
    char op = '+';
    char* ptr = strtok(temp, " ");
    while (ptr != NULL) {
        if (strcmp(ptr, "+") == 0 || strcmp(ptr, "-") == 0 || strcmp(ptr, "*") == 0) {
            op = *ptr;
        }
        else {
            int num = atoi(ptr);
            if (op == '+') answer += num;
            else if (op == '-') answer -= num;
            else answer *= num;
        }
        
        ptr = strtok(NULL, " ");
    }
    
    free(temp);
    return answer;
}