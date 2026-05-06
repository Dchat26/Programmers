#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    int months[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int total = b - 1;
    for (int i = 1; i < a; i++) {
        total += months[i];
    }
    
    char* answer = (char*)malloc(4 * sizeof(char));
    if (answer == NULL) return NULL;
    
    strcpy(answer, day[total % 7]);
    
    return answer;
}