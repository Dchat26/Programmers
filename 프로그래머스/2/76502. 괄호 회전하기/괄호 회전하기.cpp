#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

int solution(string s) {
    unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};
    int answer = 0;
    
    for (int i = 0; i < s.length(); i++) {
        string rotates = s.substr(i) + s.substr(0, i);
        
        stack<char> temp;
        bool is_TF = true;
        
        for (const auto& c : rotates) {
            if (c == '(' || c == '[' || c == '{') {
                temp.push(c);
            }
            else {
                if (!temp.empty() && temp.top() == mapping[c]) {
                    temp.pop();
                }
                else {
                    is_TF = false;
                    break;
                }
            }
        }
        
        if (is_TF && temp.empty()) {
            answer++;
        }
    }
    
    return answer;
}