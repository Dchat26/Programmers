#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int max_health = health;
    int bt = bandage[0], bh = bandage[1], bb = bandage[2];
    int combo = 0;
    
    unordered_map<int, int> attack;
    for (int i = 0; i < attacks.size(); i++) {
        attack[attacks[i][0]] = attacks[i][1];
    }
    
    int last_attack_time = attacks.back()[0];
    
    for (int i = 1; i <= last_attack_time; i++) {
        if (attack.count(i)) {
            health -= attack[i];
            combo = 0;
            
            if (health <= 0) {
                return -1;
            }
        }
        else {
            combo++;
            
            health = min(max_health, health + bh);
            
            if (combo == bt) {
                health = min(max_health, health + bb);
                combo = 0;
            }
        }
    }
    
    return health;
}