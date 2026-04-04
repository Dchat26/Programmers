#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_prefix) {
    int len = strlen(is_prefix);
    int answer = 1;
    for (int i = 0; i < len; i++) {
        if (my_string[i] != is_prefix[i]) return 0;
    }
    
    return answer;
}