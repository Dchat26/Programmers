#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int age) {
    char cage[5];
    sprintf(cage, "%d", age);
    
    int len = strlen(cage);
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        answer[i] = cage[i] - '0' + 'a';
    }
    answer[len] = '\0';
    
    return answer;
}


