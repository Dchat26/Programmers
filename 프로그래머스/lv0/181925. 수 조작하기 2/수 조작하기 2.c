#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int numLog[], size_t numLog_len) {
    char* answer = (char*)malloc((numLog_len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int j = 0;
    for (size_t i = 1; i < numLog_len; i++) {
        switch (numLog[i] - numLog[i - 1]) {
            case 1:
                answer[j++] = 'w';
                break;
            case -1:
                answer[j++] = 's';
                break;
            case 10:
                answer[j++] = 'd';
                break;
            case -10:
                answer[j++] = 'a';
                break;
        }
    }
    answer[j] = '\0';
    
    return answer;
}