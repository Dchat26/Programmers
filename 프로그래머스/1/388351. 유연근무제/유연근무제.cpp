#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    for (int i = 0; i < schedules.size(); i++) {
        int deadline = (schedules[i] / 100 * 60) + (schedules[i] % 100) + 10;
        bool is_eligible = true;
        
        for (int j = 0; j < timelogs[i].size(); j++) {
            int current_day = (startday + j - 1) % 7 + 1;
            
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