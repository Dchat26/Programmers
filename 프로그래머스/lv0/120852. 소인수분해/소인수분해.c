#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    bool* prime_check = (bool*)malloc((n + 1) * sizeof(bool));
    if (prime_check == NULL) return NULL;
    
    for (int i = 0; i <= n; i++) prime_check[i] = true;
    
    prime_check[0] = prime_check[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (prime_check[i]) {
            for (int j = i * i; j <= n; j += i) prime_check[j] = false;
        }
    }
    
    int temp_n = n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (prime_check[i] && temp_n % i == 0) {
            count++;
            while (temp_n % i == 0) temp_n /= i;
        }
    }
    
    int* answer = (int*)malloc(count * sizeof(int));
    if (answer == NULL) {
        free(prime_check);
        return NULL;
    }
    
    for (int i = 2, j = 0; i <= n; i++) {
        if (prime_check[i] && n % i == 0) {
            answer[j++] = i;
            while (n % i == 0) n /= i;
        }
    }
    
    free(prime_check);
    return answer;
}