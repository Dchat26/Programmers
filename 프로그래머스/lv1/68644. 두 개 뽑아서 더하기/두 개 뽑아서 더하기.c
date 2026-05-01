#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len) {
    int numset[201] = {0};
    
    int count = 0;
    for (int i = 0; i < numbers_len - 1; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            int idx = numbers[i] + numbers[j];
            if (numset[idx] == 0) {
                numset[idx] = 1;
                count++;
            }
        }
    }
    
    int* answer = (int*)malloc(count * sizeof(int));
    if (answer == NULL) return NULL;
    
    int index = 0;
    for (int i = 0; i <= 200; i++) {
        if (numset[i] == 1) {
            answer[index++] = i;
        }
    }
    
    return answer;
}