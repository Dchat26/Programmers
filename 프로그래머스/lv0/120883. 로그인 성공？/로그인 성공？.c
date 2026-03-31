#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* id_pw[], size_t id_pw_len, const char*** db, size_t db_rows, size_t db_cols) {
    char** answer = (char**)malloc(1 * sizeof(char*));
    if (answer == NULL) return NULL;
    
    char* res = "fail";
    for (int i = 0; i < db_rows; i++) {
        if (strcmp(id_pw[0], db[i][0]) == 0) {
            if (strcmp(id_pw[1], db[i][1]) == 0) {
                res = "login";
                break;
            }
            else res = "wrong pw";
        }
    }
    
    answer[0] = (char*)malloc(20 * sizeof(char));
    if (answer[0] == NULL) {
        free(answer);
        return NULL;
    }
    strcpy(answer[0], res);
    
    return answer[0];
}