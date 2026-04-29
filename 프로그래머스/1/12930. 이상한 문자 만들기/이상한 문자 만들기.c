#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* s) {
    char* answer = strdup(s);
    if (answer == NULL) return NULL;
    
    int idx = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (answer[i] == ' ') {
            idx = 0;
            continue;
        }
        
        if (idx % 2 == 0) {
            if (islower(answer[i])) {
                answer[i] = toupper(answer[i]);
            }
        }
        else {
            if (isupper(answer[i])) {
                answer[i] = tolower(answer[i]);
            }
        }
        
        idx++;
    }
    
    return answer;
}