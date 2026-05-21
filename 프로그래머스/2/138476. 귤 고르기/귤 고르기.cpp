#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int max_val = *max_element(tangerine.begin(), tangerine.end());
    vector<int> tlist(max_val + 1);
    
    for (const auto& num : tangerine) {
        tlist[num]++;
    }
    
    sort(tlist.begin(), tlist.end(), greater<int>());
    
    int answer = 0;
    for (const auto& num : tlist) {
        answer++;
        k -= num;
        
        if (k <= 0) break;
    }
    
    return answer;
}