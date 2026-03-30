#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

long long solution(const char* numbers) {
    char* dict[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    long long answer = 0;
    int i = 0;
    int len = strlen(numbers);
    while (i < len) {
        for (int j = 0; j < 10; j++) {
            if (strncmp(numbers + i, dict[j], strlen(dict[j])) == 0) {
                answer = answer * 10 + j;
                i += strlen(dict[j]);
                
                break;
            }
        }
    }
    
    return answer;
}