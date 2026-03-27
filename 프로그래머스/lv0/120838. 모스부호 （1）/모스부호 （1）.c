#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* letter) {
    char* mose[] = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
    };
    
    int len = strlen(letter);
    
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    char* copy = (char*)malloc((len + 1) * sizeof(char));
    if (copy == NULL) {
        free(answer);
        return NULL;
    }
    
    strcpy(copy, letter);
    char* ptr = strtok(copy, " ");
    int k = 0;
    while (ptr != NULL) {
        for (int i = 0; i < 26; i++) {
            if (strcmp(ptr, mose[i]) == 0) {
                answer[k++] = i + 'a';
                break;
            }
        }
        
        ptr = strtok(NULL, " ");
    }
    answer[k] = '\0';
    
    free(copy);
    return answer;
}