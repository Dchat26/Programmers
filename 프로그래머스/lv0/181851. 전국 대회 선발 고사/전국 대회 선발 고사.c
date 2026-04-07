#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {
    int* temp = (int*)calloc(rank_len, sizeof(int));
    if (temp == NULL) return NULL;
    
    for (int i = 0; i < rank_len; i++) {
        if (!attendance[i]) temp[i] = -1;
        else temp[i] = 1;
    }
    
    for (int i = 0; i < rank_len; i++) {
        for (int j = 0; j < rank_len; j++) {
            if (temp[i] != -1 && temp[j] != -1 && rank[j] > rank[i]) {
                temp[j]++;
            }
        }
    }
    
    int answer = 0;
    for (int i = 0; i < rank_len; i++) {
        if (temp[i] == 1) answer += 10000 * i;
        else if (temp[i] == 2) answer += 100 * i;
        else if (temp[i] == 3) answer += i;
    }
    
    free(temp);
    return answer;
}