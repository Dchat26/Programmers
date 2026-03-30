#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* keyinput[], size_t keyinput_len, int board[], size_t board_len) {
    int xrange = (board[0] - 1) / 2;
    int yrange = (board[1] - 1) / 2;
    
    int* answer = (int*)calloc(2, sizeof(int));
    if (answer == NULL) return NULL;
    
    for (int i = 0; i < keyinput_len; i++) {
        if (strcmp(keyinput[i], "up") == 0) {
            if (answer[1] != yrange) answer[1]++;
        } 
        else if (strcmp(keyinput[i], "down") == 0) {
            if (answer[1] != -yrange) answer[1]--;
        } 
        else if (strcmp(keyinput[i], "left") == 0) {
            if (answer[0] != -xrange) answer[0]--;
        } 
        else if (strcmp(keyinput[i], "right") == 0) {
            if (answer[0] != xrange) answer[0]++;
        }
    }
    
    return answer;
}