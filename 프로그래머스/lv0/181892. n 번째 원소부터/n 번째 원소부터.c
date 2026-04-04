#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int len = num_list_len - n + 1;
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = n - 1, j = 0; i < num_list_len; i++) answer[j++] = num_list[i];
    
    return answer;
}