#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int solution(int array[], size_t array_len, int height) {
    qsort(array, array_len, sizeof(int), compare);
    
    int count = 0;
    for (int i = 0; i < array_len; i++) {
        if (array[i] > height) count++;
    }
    
    int answer = count;
    
    return answer;
}