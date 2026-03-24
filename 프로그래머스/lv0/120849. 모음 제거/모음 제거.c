#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int k = 0;
    for (int i = 0; i < len; i++) {
        bool is_TF = true;
        for (int j = 0; j < 5; j++) {
            if (my_string[i] == v[j]) {
                is_TF = false;
                break;
            }
        }
        
        if (is_TF) answer[k++] = my_string[i];
    }
    answer[k] = '\0';
    
    return answer;
}