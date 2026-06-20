#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int get_friend_index(const char* name, const char* friends[], int flen) {
    for (int i = 0; i < flen; i++) {
        if (strcmp(name, friends[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int solution(const char* friends[], size_t friends_len, const char* gifts[], size_t gifts_len) {
    int flen = (int)friends_len;
    
    int** gt = (int**)malloc(sizeof(int*) * flen);
    for (int i = 0; i < flen; i++) {
        gt[i] = (int*)calloc(flen, sizeof(int));
    }
    
    for (size_t i = 0; i < gifts_len; i++) {
        char buf[100];
        strcpy(buf, gifts[i]);
        
        char* giver = strtok(buf, " ");
        char* taker = strtok(NULL, " ");
        
        int giver_idx = get_friend_index(giver, friends, flen);
        int taker_idx = get_friend_index(taker, friends, flen);
        
        gt[giver_idx][taker_idx]++;
    }
    
    int* gval = (int*)calloc(flen, sizeof(int));
    for (int i = 0; i < flen; i++) {
        int give_count = 0;
        int take_count = 0;
        for (int j = 0; j < flen; j++) {
            give_count += gt[i][j]; 
            take_count += gt[j][i];
        }
        gval[i] = give_count - take_count;
    }
    
    int* giftval = (int*)calloc(flen, sizeof(int));
    for (int i = 0; i < flen - 1; i++) {
        for (int j = i + 1; j < flen; j++) {
            if (gt[i][j] > gt[j][i]) {
                giftval[i]++;
            } else if (gt[i][j] < gt[j][i]) {
                giftval[j]++;
            } else {
                if (gval[i] > gval[j]) {
                    giftval[i]++;
                } else if (gval[i] < gval[j]) {
                    giftval[j]++;
                }
            }
        }
    }
    
    int max_gifts = 0;
    for (int i = 0; i < flen; i++) {
        if (giftval[i] > max_gifts) {
            max_gifts = giftval[i];
        }
    }
    
    for (int i = 0; i < flen; i++) free(gt[i]);
    free(gt);
    free(gval);
    free(giftval);
    
    return max_gifts;
}