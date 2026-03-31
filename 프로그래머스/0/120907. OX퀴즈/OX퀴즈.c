#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* quiz[], size_t quiz_len) {
    char** answer = (char**)malloc(quiz_len * sizeof(char*));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < quiz_len; i++) {
        char* s = strdup(quiz[i]);
        
        char* X = strtok(s, " ");
        char* op = strtok(NULL, " ");
        char* Y = strtok(NULL, " ");
        strtok(NULL, " ");
        char* Z = strtok(NULL, " ");
        
        int res = 0;
        int x_val = atoi(X);
        int y_val = atoi(Y);
        int z_val = atoi(Z);
        
        if (strcmp(op, "+") == 0) res = x_val + y_val;
        else res = x_val - y_val;
        
        answer[i] = (char*)malloc(2 * sizeof(char));
        if (res == z_val) strcpy(answer[i], "O");
        else strcpy(answer[i], "X");
        
        free(s);
    }
    
    return answer;
}