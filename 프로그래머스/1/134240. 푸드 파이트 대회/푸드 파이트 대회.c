#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int food[], size_t food_len) {
    int foodlen = 1;
    for (int i = 1; i < food_len; i++) {
        foodlen += (food[i] / 2) * 2;
    }
    
    char* answer = (char*)malloc((foodlen + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int left = 0;
    int right = foodlen - 1;
    for (int i = 1; i < food_len; i++) {
        int count =  food[i] / 2;
        
        while(count--) {
            answer[left++] = i + '0';
            answer[right--] = i + '0';
        }
    }
    answer[left] = '0';
    answer[foodlen] = '\0';
    
    return answer;
}