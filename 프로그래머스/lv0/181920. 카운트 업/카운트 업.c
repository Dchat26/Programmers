#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    int len = end_num - start_num + 1;
    int* answer = (int*)malloc(len * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = start_num, j = 0; i <= end_num; i++) {
        answer[j++] = i;
    }
    
    return answer;
}