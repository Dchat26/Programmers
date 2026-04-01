#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* target) {
    if (strstr(my_string, target)) return 1;
    else return 0;
}