#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int arr[], size_t arr_len) {
    int* current_arr = (int*)malloc(arr_len * sizeof(int));
    int* temp = (int*)malloc(arr_len * sizeof(int));
    if (current_arr == NULL || temp == NULL) return -1;
    
    memcpy(current_arr, arr, arr_len * sizeof(int));
    
    int count = 0;
    while (1) {
        bool is_changed = false;
        
        for (int i = 0; i < arr_len; i++) {
            int val = current_arr[i];
            if (val % 2 == 0 && val >= 50) {
                temp[i] = val / 2; 
            }
            else if (val % 2 == 1 && val < 50) {
                temp[i] = val * 2 + 1;
            }
            else temp[i] = val;
            
            if (current_arr[i] != temp[i]) is_changed = true;
        }
        
        if (!is_changed) {
            free(temp);
            free(current_arr);
            current_arr = temp = NULL;
            return count;
        }
        
        memcpy(current_arr, temp, arr_len * sizeof(int));
        count++;
    }
}