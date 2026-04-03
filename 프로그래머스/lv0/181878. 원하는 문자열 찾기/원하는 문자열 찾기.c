#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    int len = strlen(myString);
    int plen = strlen(pat);
    
    char* temp = (char*)malloc((len + 1) * sizeof(char));
    char* ptemp = (char*)malloc((plen + 1) * sizeof(char));
    if (temp == NULL || ptemp == NULL) return -1;
    
    for (int i = 0; i < len; i++) {
        if (myString[i] >= 'A' && myString[i] <= 'Z') {
            temp[i] = myString[i] + ('a' - 'A');
        }
        else temp[i] = myString[i];
    }
    temp[len] = '\0';
    
    for (int i = 0; i < plen; i++) {
        if (pat[i] >= 'A' && pat[i] <= 'Z') {
            ptemp[i] = pat[i] + ('a' - 'A');
        }
        else ptemp[i] = pat[i];
    }
    ptemp[plen] = '\0';
    
    int answer = 0;
    if (strstr(temp, ptemp) != NULL) answer = 1;
    
    free(ptemp);
    free(temp);
    return answer;
}