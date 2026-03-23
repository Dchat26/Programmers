#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    int* arr = (int*)malloc(num_list_len * sizeof(int));
    if (arr == NULL) return -1;
    
    for (int i = 0; i < num_list_len; i++) {
        arr[i] = num_list[num_list_len - 1 - i];
    }
    
    return arr;
}