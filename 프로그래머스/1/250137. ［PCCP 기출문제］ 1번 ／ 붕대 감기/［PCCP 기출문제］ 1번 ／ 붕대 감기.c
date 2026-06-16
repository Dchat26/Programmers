#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_min(int a, int b) {
    return (a < b) ? a : b;
}

int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int max_health = health;
    int bt = bandage[0], bh = bandage[1], bb = bandage[2];
    int combo = 0;
    
    int attack_timeline[1001] = {0};
    int last_attack_time = 0;
    
    for (size_t i = 0; i < attacks_rows; i++) {
        int attack_time = attacks[i][0];
        int damage = attacks[i][1];
        
        attack_timeline[attack_time] = damage;
        
        if (attack_time > last_attack_time) {
            last_attack_time = attack_time;
        }
    }
    
    for (int i = 1; i <= last_attack_time; i++) {
        
        if (attack_timeline[i] > 0) {
            health -= attack_timeline[i];
            combo = 0; 
            
            if (health <= 0) {
                return -1;
            }
        }
        else {
            combo++;
            
            health = get_min(max_health, health + bh);
            
            if (combo == bt) {
                health = get_min(max_health, health + bb);
                combo = 0;
            }
        }
    }
    
    return health;
}