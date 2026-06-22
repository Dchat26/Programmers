#include <vector>
#include <numeric>

using namespace std;

int solution(vector<vector<int>> signals) {
    int n = signals.size();
    vector<int> periods(n);
    for(int i = 0; i < n; i++) {
        periods[i] = signals[i][0] + signals[i][1] + signals[i][2];
    }
    
    for (int t = 1; t <= 5000000; t++) {
        bool all_yellow = true;
        
        for (int i = 0; i < n; i++) {
            int G = signals[i][0];
            int Y = signals[i][1];
            int T = periods[i];
            
            int remain = t % T;
            if (remain == 0) remain = T;
            
            if (!(remain > G && remain <= G + Y)) {
                all_yellow = false;
                break;
            }
        }
        
        if (all_yellow) return t;
    }
    
    return -1;
}