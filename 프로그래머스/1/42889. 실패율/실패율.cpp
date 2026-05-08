#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> stage_count(N + 2, 0);
    for (const auto& num : stages) {
        stage_count[num]++;
    }
    
    int total = stages.size();
    vector<pair<int, double>> temp;
    for (int i = 1; i <= N; i++) {
        int count = stage_count[i];
        
        if (total == 0) {
            temp.push_back({i, 0.0});
        }
        else {
            temp.push_back({i, (double)count / total});
            total -= count;
        }
    }
    
    sort(temp.begin(), temp.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    });
    
    vector<int> answer;
    for (int i = 0; i < temp.size(); i++) {
        answer.push_back(temp[i].first);
    }
    
    return answer;
}