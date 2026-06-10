#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int schedules[], size_t schedules_len, int** timelogs, size_t timelogs_rows, size_t timelogs_cols, int startday) {
    int answer = 0;
    
    for (size_t i = 0; i < schedules_len; i++) {
        int deadline = (schedules[i] / 100 * 60) + (schedules[i] % 100) + 10;
        bool is_eligible = true;
        
        for (size_t j = 0; j < timelogs_cols; j++) {
            int current_day = (startday + (int)j - 1) % 7 + 1;
            
            if (current_day == 6 || current_day == 7) {
                continue;
            }
            
            int arrival_time = (timelogs[i][j] / 100 * 60) + (timelogs[i][j] % 100);
            
            if (arrival_time > deadline) {
                is_eligible = false;
                break;
            }
        }
        
        if (is_eligible) {
            answer++;
        }
    }
    
    return answer;
}