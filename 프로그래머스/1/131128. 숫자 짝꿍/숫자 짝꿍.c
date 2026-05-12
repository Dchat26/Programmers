#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* X, const char* Y) {
    int Xcount[10] = {0};
    int Ycount[10] = {0};
    
    int Xlen = strlen(X);
    int Ylen = strlen(Y);
    
    for (int i = 0; i < Xlen; i++) {
        Xcount[X[i] - '0']++;
    }
    for (int i = 0; i < Ylen; i++) {
        Ycount[Y[i] - '0']++;
    }
    
    int total = 0;
    int ncount[10];
    for (int i = 9; i >= 0; i--) {
        int count = (Xcount[i] < Ycount[i] ? Xcount[i] : Ycount[i]);
        
        ncount[i] = count;
        total += count;
    }
    
    if (total == 0) {
        char* answer = (char*)malloc(3 * sizeof(char));
        if (answer == NULL) return NULL;
        
        strcpy(answer, "-1");
        return answer;
    }
    
    char* answer = (char*)malloc((total + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int idx = 0;
    for (int i = 9; i >= 0; i--) {
        if (ncount[i] > 0) {
            for (int j = 0; j < ncount[i]; j++) {
                answer[idx++] = i + '0';
            }
        }
    }
    answer[idx] = '\0';
    
    if (answer[0] == '0') {
        answer[1] = '\0';
    }
    
    return answer;
}