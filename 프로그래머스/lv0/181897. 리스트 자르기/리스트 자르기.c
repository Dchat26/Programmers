#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int idx = 0;
    switch (n) {
        case 1:
            for (int i = 0; i <= b; i++) {
                answer[idx++] = num_list[i];
            }
            break;
        case 2:
            for (int i = a; i < num_list_len; i++) {
                answer[idx++] = num_list[i];
            }
            break;
        case 3:
            for (int i = a; i <= b; i++) {
                answer[idx++] = num_list[i];
            }
            break;
        case 4:
            for (int i = a; i <= b; i += c) {
                answer[idx++] = num_list[i];
            }
            break;
    }
    
    return (int*)realloc(answer, idx * sizeof(int));
}