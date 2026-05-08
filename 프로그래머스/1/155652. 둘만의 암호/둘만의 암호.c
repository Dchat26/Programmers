#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s, const char* skip, int index) {
    int len = strlen(s);
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        int count = 0;
        while (count < index) {
            c++;
            
            if (c > 'z') {
                c = 'a';
            }
            
            if (strchr(skip, c) == NULL) {
                count++;
            }
        }
        answer[i] = c;
    }
    answer[len] = '\0';
    
    return answer;
}