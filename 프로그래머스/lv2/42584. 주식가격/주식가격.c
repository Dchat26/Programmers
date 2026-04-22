#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int prices[], size_t prices_len) {
    int* answer = (int*)malloc(prices_len * sizeof(int));
    if (answer == NULL) return NULL;
    
    int* stack = (int*)malloc(prices_len * sizeof(int));
    if (stack == NULL) {
        free(answer); 
        return NULL;
    }
    int top = -1;

    for (size_t i = 0; i < prices_len; i++) {
        while (top != -1 && prices[stack[top]] > prices[i]) {
            int past_time = stack[top];
            top--;
      
            answer[past_time] = i - past_time; 
        }
        top++;
        stack[top] = i; 
    }

    while (top != -1) {
        int past_time = stack[top];
        top--;

        answer[past_time] = (prices_len - 1) - past_time;
    }


    free(stack);
    return answer;
}