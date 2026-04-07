#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* a, const char* b) {
    int alen = strlen(a);
    int blen = strlen(b);
    int max_len = (alen > blen) ? alen : blen;
    
    char* answer = (char*)malloc((max_len + 2) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int i = alen - 1;
    int j = blen - 1;
    int k = max_len;
    int carry = 0;
    
    answer[max_len + 1] = '\0';
    
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        
        answer[k] = (sum % 10) + '0';
        carry = sum / 10;
        k--;
    }
    
    if (k == 0) {
        memmove(answer, answer + 1, max_len + 1);
    }
    
    return answer;
}