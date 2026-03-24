#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int solution(const char* my_string) {
    int len = strlen(my_string);
    
    int answer = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(my_string[i])) {
            answer += (my_string[i] - '0');
        }
    }
    
    return answer;
}