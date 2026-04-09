#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> days_left;
    
    for (int i = 0; i < progresses.size(); i++) {
        int remain_progress = 100 - progresses[i];
        int days = remain_progress / speeds[i];
        
        if (remain_progress % speeds[i] != 0) {
            days += 1;
        }
        
        days_left.push(days);
    }
    
    int front_day = days_left.front();
    int count = 0;
    while (!days_left.empty()) {
        if (days_left.front() <= front_day) {
            count++;
            days_left.pop();
        } 
        else {
            answer.push_back(count);
            count = 0;
            front_day = days_left.front();
        }
    }
    
    answer.push_back(count);
    
    return answer;
}