#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int** queries, size_t queries_rows, size_t queries_cols) {
    char* answer = strdup(my_string);
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < queries_rows; i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        while (s < e) {
            char temp = answer[s];
            answer[s] = answer[e];
            answer[e] = temp;
            
            s++;
            e--;
        }
    }
    
    return answer;
}