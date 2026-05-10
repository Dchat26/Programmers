#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int zero_count = count(lottos.begin(), lottos.end(), 0);
    
    unordered_set<int> w(win_nums.begin(), win_nums.end());
    
    int max_count = 0;
    for (int num : lottos) {
        if (num != 0 && w.find(num) != w.end()) {
            max_count++;
        }
    }
    
    vector<int> rank = {6, 6, 5, 4, 3, 2, 1};
    
    return {rank[max_count + zero_count], rank[max_count]};
}