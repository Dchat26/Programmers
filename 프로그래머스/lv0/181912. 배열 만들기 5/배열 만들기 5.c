#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    char* temp = (char*)malloc((l + 1) * sizeof(char));
    if (temp == NULL) return NULL;
    
    int count = 0;
    for (int i = 0; i < intStrs_len; i++) {
        strncpy(temp, intStrs[i] + s, l);
        temp[l] = '\0';
        
        if (atoi(temp) > k) count++;
    }
    
    int* answer = (int*)malloc(count * sizeof(int));
    if (answer == NULL) {
        free(temp);
        return NULL;
    }
    
    int idx = 0;
    for (int i = 0; i < intStrs_len; i++) {
        strncpy(temp, intStrs[i] + s, l);
        temp[l] = '\0';
        
        long long num = atoll(temp);
        if (num > k) {
            answer[idx++] = (int)num;
        }
    }
    
    free(temp);
    return answer;
}