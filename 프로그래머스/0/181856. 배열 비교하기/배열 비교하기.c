#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    if (arr1_len > arr2_len) return 1;
    else if (arr1_len < arr2_len) return -1;
    else {
        int arr1sum = 0;
        int arr2sum = 0;
        
        for (int i = 0; i < arr1_len; i++) {
            arr1sum += arr1[i];
            arr2sum += arr2[i];
        }
        
        if (arr1sum > arr2sum) return 1;
        else if (arr1sum < arr2sum) return -1;
        else return 0;
    }
}