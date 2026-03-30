#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* bin1, const char* bin2) {
    long n1 = strtol(bin1, NULL, 2);
    long n2 = strtol(bin2, NULL, 2);
    long sum = n1 + n2;
    
    if (sum == 0) {
        char* zero = (char*)malloc(2 * sizeof(char));
        if (zero == NULL ) return NULL;
        
        strcpy(zero, "0");
        
        return zero;
    }
    
    char* answer = (char*)malloc(13);
    char temp[13];
    
    int i = 0;
    while (sum > 0) {
        temp[i++] = (sum % 2) + '0';
        sum /= 2;
    }
    
    for (int j = 0; j < i; j++) {
        answer[j] = temp[i - 1 - j];
    }
    answer[i] = '\0';
    
    return answer;
}