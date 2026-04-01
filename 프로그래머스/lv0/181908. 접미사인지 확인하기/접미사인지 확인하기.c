#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_suffix) {
    int mlen = strlen(my_string);
    int ilen = strlen(is_suffix);
    int idx = strstr(my_string, is_suffix);
    
    if (ilen > mlen) return 0;
    
    const char* start_ptr = my_string + (mlen - ilen);
    
    if (strcmp(start_ptr, is_suffix) == 0) return 1;
    
    return 0;
}