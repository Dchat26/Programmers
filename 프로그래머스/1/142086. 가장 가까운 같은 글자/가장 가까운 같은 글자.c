#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int slen = strlen(s);
    int* answer = (int*)calloc(slen, sizeof(int));
    if (answer == NULL) return NULL;
    
    int alpidx[26];
    for (int i = 0; i < 26; i++) {
        alpidx[i] = -1;
    }
    
    for (int i = 0; i < slen; i++) {
        int charidx = s[i] - 'a';
        
        if (alpidx[charidx] == -1) {
            answer[i] = -1;
        }
        else {
            answer[i] = i - alpidx[charidx];
        }
        
        alpidx[charidx] = i;
    }
    
    return answer;
}