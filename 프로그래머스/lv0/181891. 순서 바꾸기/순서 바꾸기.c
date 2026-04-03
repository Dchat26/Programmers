#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int k = 0;
    for (int i = n; i < num_list_len; i++) answer[k++] = num_list[i];
    for (int j = 0; j < n; j++) answer[k++] = num_list[j];
    
    return answer;
}