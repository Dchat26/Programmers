#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int time_to_sec(const char* time_str) {
    int m, s;
    sscanf(time_str, "%d:%d", &m, &s);
    return m * 60 + s;
}

int get_max(int a, int b) { return (a > b) ? a : b; }
int get_min(int a, int b) { return (a < b) ? a : b; }

char* solution(const char* video_len, const char* pos, const char* op_start, const char* op_end, const char* commands[], size_t commands_len) {
    int total = time_to_sec(video_len);
    int stotal = time_to_sec(op_start);
    int etotal = time_to_sec(op_end);
    int ptotal = time_to_sec(pos);
    
    for (size_t i = 0; i < commands_len; i++) {
        if (ptotal >= stotal && ptotal <= etotal) {
            ptotal = etotal;
        }
        
        if (strcmp(commands[i], "prev") == 0) {
            ptotal = get_max(ptotal - 10, 0);
        } else {
            ptotal = get_min(ptotal + 10, total);
        }
        
        if (ptotal >= stotal && ptotal <= etotal) {
            ptotal = etotal;
        }
    }
    
    int m = ptotal / 60;
    int s = ptotal % 60;
    
    char* answer = (char*)malloc(sizeof(char) * 6);
    sprintf(answer, "%02d:%02d", m, s);
    
    return answer;
}