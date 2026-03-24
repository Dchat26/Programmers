#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)calloc(2, sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) answer[0]++;
        else answer[1]++;
    }
    
    return answer;
}