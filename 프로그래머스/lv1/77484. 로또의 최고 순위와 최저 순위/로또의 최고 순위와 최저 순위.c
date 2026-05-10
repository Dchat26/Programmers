#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    int* answer = (int*)malloc(2 * sizeof(int));
    
    int zero_count = 0;
    int match_count = 0;
    
    for (size_t i = 0; i < lottos_len; i++) {
        if (lottos[i] == 0) {
            zero_count++;
            continue; 
        }
        
        for (size_t j = 0; j < win_nums_len; j++) {
            if (lottos[i] == win_nums[j]) {
                match_count++;
                break;
            }
        }
    }
    
    int rank[7] = {6, 6, 5, 4, 3, 2, 1};
    
    answer[0] = rank[match_count + zero_count]; 
    answer[1] = rank[match_count];             
    
    return answer;
}