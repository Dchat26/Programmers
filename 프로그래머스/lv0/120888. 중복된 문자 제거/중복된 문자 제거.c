#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int alp[53] = {0};
    
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isupper(my_string[i])) {
            int target = my_string[i] - 'A';
            if (alp[target] == 0) {
                answer[j++] = my_string[i];
                alp[target]++;
            }
        }
        
        if (islower(my_string[i])) {
            int target = my_string[i] - 'a' + 26;
            if (alp[target] == 0) {
                answer[j++] = my_string[i];
                alp[target]++;
            }
        }
        
        if (my_string[i] == ' ') {
            if (alp[52] == 0) {
                answer[j++] = my_string[i];
                alp[52]++;
            }    
        }
    }
    answer[j] = '\0';
    
    return answer;
}