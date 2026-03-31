#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

char* solution(const char* polynomial) {
    int x_val = 0;
    int n_val = 0;
    
    char* copy = strdup(polynomial);
    char* ptr = strtok(copy, " ");
    
    while (ptr != NULL) {
        if (strcmp(ptr, "+") != 0) {
            int len = strlen(ptr);
            
            if (ptr[len - 1] == 'x') {
                if (len == 1) x_val += 1;
                else {
                    ptr[len - 1] = '\0';
                    x_val += atoi(ptr);
                }
            }
            else {
                n_val += atoi(ptr);
            }
        }
        
        ptr = strtok(NULL, " ");
    }
    free(copy);
    
    char* answer = (char*)malloc(100 * sizeof(char));
    if (answer == NULL) return NULL;
    
    if (x_val > 0 && n_val > 0) {
        if (x_val == 1) sprintf(answer, "x + %d", n_val);
        else sprintf(answer, "%dx + %d", x_val, n_val);
    } 
    else if (x_val > 0 && n_val == 0) {
        if (x_val == 1) sprintf(answer, "x");
        else sprintf(answer, "%dx", x_val);
    } 
    else if (x_val == 0 && n_val > 0) {
        sprintf(answer, "%d", n_val);
    }
    
    return answer;
}