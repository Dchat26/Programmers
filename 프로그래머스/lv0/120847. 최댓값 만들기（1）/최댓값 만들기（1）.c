#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int solution(int numbers[], size_t numbers_len) {
    qsort(numbers, numbers_len, sizeof(int), compare);
    
    int answer = numbers[numbers_len - 1] * numbers[numbers_len - 2];
    
    return answer;
}