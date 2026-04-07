#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 100001

int* solution(int arr[], size_t arr_len, int k) {
    int* answer = (int*)malloc(k * sizeof(int));
    if (answer == NULL) return NULL;
    
    bool visited[MAX] = {false};
    int count = 0;
    for (int i = 0; i < arr_len; i++) {
        if (!visited[arr[i]]) {
            visited[arr[i]] = true;
            answer[count++] = arr[i];
            
            if (count == k) break;
        }
    }
    
    while (count < k) {
        answer[count++] = -1;
    }
    
    return answer;
}