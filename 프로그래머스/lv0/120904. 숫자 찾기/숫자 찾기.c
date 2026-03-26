#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    char str[10];
    sprintf(str, "%d", num);
    
    char target = k + '0';
    
    int answer = -1;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target) {
            answer = i + 1;
            break;
        }
        i++;
    }
    
    return answer;
}