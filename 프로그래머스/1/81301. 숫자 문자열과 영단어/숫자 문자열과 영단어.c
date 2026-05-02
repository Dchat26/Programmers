#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int solution(const char* s) {
    char num[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    char temp[10];
    temp[0] = '\0';
    
    int answer = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        if (isdigit(s[i])) {
            answer = answer * 10 + (s[i] - '0');
        }
        else {
            int t_len = strlen(temp);
            temp[t_len] = s[i];
            temp[t_len + 1] = '\0';
            
            for (int j = 0; j < 10; j++) {
                if (strcmp(temp, num[j]) == 0) {
                    answer = answer * 10 + j;
                    temp[0] = '\0';
                    break;
                }
            }
        }
    }
    
    return answer;
}