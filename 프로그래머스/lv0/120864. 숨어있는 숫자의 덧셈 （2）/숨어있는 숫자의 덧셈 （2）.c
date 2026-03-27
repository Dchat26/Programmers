#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

int solution(const char* my_string) {
    int answer = 0;
    int current_num = 0;
    
    for (int i = 0; my_string[i] != '\0'; i++) {
        if (isdigit(my_string[i])) {
            current_num = current_num * 10 + (my_string[i] - '0');
        } 
        else {
            answer += current_num;
            current_num = 0;
        }      
    }
    answer += current_num;
    
    return answer;
}