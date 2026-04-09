#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n);
    stack<int> s;   

    for (int i = 0; i < n; i++) {
        while (!s.empty() && prices[s.top()] > prices[i]) {
            int past_time = s.top();
            s.pop();
            answer[past_time] = i - past_time; 
        }
        s.push(i);
    }

    while (!s.empty()) {
        int past_time = s.top();
        s.pop();
        answer[past_time] = n - 1 - past_time;
    }

    return answer;
}