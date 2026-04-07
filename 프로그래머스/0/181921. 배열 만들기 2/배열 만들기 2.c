#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int l, int r) {
    int count = 0;
    for (int i = l; i <= r; i++) {
        int is_TF = 1;
        int target = i;
        while (target > 0) {
            if (target % 10 != 0 && target % 10 != 5) {
                is_TF = 0;
                break;
            }
            target /= 10;
        }
        
        if (is_TF) count++;
    }
    
    if (count == 0) {
        int* answer = (int*)malloc(1 * sizeof(int));
        if (answer == NULL) return NULL;
        answer[0] = -1;
        
        return answer;
    }
    
    int* answer = (int*)malloc(count * sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = l, j = 0; i <= r; i++) {
        int is_TF = 1;
        int target = i;
        while (target > 0) {
            if (target % 10 != 0 && target % 10 != 5) {
                is_TF = 0;
                break;
            }
            target /= 10;
        }
        
        if (is_TF) answer[j++] = i;
    }
    
    return answer;
}