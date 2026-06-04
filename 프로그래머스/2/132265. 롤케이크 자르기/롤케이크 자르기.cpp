#include <string>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int solution(vector<int> topping) {
    unordered_map<int, int> right;
    for (const auto& num : topping) {
        right[num]++;
    }
    
    set<int> left;
    
    int answer = 0;
    for (const auto& num : topping) {
        left.insert(num);
        right[num]--;
        
        if (right[num] == 0) {
            right.erase(num);
        }
        
        if (left.size() == right.size()) {
            answer++;
        }
    }
    
    return answer;
}