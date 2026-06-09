#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], size_t privacies_len) {
    int* answer = (int*)malloc(sizeof(int) * privacies_len);
    int ans_idx = 0;
    
    int ty, tm, td;
    sscanf(today, "%d.%d.%d", &ty, &tm, &td);
    int today_days = (ty * 12 * 28) + (tm * 28) + td;
    
    int term_map[26] = {0};
    for (size_t i = 0; i < terms_len; i++) {
        char type;
        int months;
        sscanf(terms[i], "%c %d", &type, &months);
        term_map[type - 'A'] = months * 28; 
    }
    
    for (size_t i = 0; i < privacies_len; i++) {
        int py, pm, pd;
        char type;
        
        sscanf(privacies[i], "%d.%d.%d %c", &py, &pm, &pd, &type);
        int privacy_days = (py * 12 * 28) + (pm * 28) + pd;
        
        if (privacy_days + term_map[type - 'A'] <= today_days) {
            answer[ans_idx++] = i + 1;
        }
    }
    
    return answer;
}