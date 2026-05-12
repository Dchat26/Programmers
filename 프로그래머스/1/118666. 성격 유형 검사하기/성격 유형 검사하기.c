#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    int scores[26] = {0};
    
    for (size_t i = 0; i < survey_len; i++) {
        int choice = choices[i];
        
        if (choice < 4) {
            scores[survey[i][0] - 'A'] += (4 - choice);
        } else if (choice > 4) {
            scores[survey[i][1] - 'A'] += (choice - 4);
        }
    }
    
    char* answer = (char*)malloc(5 * sizeof(char));

    answer[0] = (scores['R' - 'A'] >= scores['T' - 'A']) ? 'R' : 'T';
    answer[1] = (scores['C' - 'A'] >= scores['F' - 'A']) ? 'C' : 'F';
    answer[2] = (scores['J' - 'A'] >= scores['M' - 'A']) ? 'J' : 'M';
    answer[3] = (scores['A' - 'A'] >= scores['N' - 'A']) ? 'A' : 'N';
    answer[4] = '\0';
    
    return answer;
}