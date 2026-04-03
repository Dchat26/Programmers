#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int oddsum = 0;
    int evensum = 0;
    for (size_t i = 0; i < num_list_len; i++) {
        if (i % 2 == 0) oddsum += num_list[i];
        else evensum += num_list[i];
    }
    
    if (oddsum == evensum) return oddsum;
    else return (oddsum > evensum) ? oddsum : evensum;
}