#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {
    int count = 0;
    for (size_t i = 0; i < parts_rows; i++) {
        for (int j = parts[i][0]; j <= parts[i][1]; j++) count++;
    }
    
    char* answer = (char*)malloc((count + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    int idx = 0;
    for (size_t i = 0; i < my_strings_len; i++) {
        for (int j = parts[i][0]; j <= parts[i][1]; j++) {
            answer[idx++] = my_strings[i][j];
        }
    }
    answer[idx] = '\0';
    
    return answer;
}