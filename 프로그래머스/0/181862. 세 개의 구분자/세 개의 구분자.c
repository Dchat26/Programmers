#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* myStr) {
    int len = strlen(myStr);
    char** answer = (char**)malloc(len * sizeof(char*));
    if (answer == NULL) return NULL;
   
    int count = 0;
    int start = -1;
    for (int i = 0; i <= len; i++) {
        if (myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c' || myStr[i] == '\0') {
            if (start != -1) {
                int sub_len = i - start;
                answer[count] = (char*)malloc((sub_len + 1) * sizeof(char));
                if (answer[count] == NULL) break;
                
                strncpy(answer[count], myStr + start, sub_len);
                answer[count][sub_len] = '\0';
                count++;
                start = -1; // 시작점 초기화
            }
        } else {
            if (start == -1) start = i;
        }
    }

    if (count == 0) {
        free(answer);
        char** empty = (char**)malloc(sizeof(char*));
        empty[0] = strdup("EMPTY");
        return empty;
    }

    return (char**)realloc(answer, count * sizeof(char*));
}