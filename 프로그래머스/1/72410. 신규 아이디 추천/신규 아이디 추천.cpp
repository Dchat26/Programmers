#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    
    string temp2 = "";
    for (char c : new_id) {
        if (islower(c) || isdigit(c) || c == '-' || c == '_' || c == '.') {
            temp2 += c;
        }
    }
    answer = temp2;
    
    string temp3 = "";
    for (char c : answer) {
        if (c == '.' && !temp3.empty() && temp3.back() == '.') {
            continue;
        }
        temp3 += c;
    }
    answer = temp3;
    
    if (!answer.empty() && answer.front() == '.') {
        answer.erase(answer.begin());
    }
    if (!answer.empty() && answer.back() == '.') {
        answer.pop_back();
    }
    
    if (answer.empty()) {
        answer = "a";
    }
    
    if (answer.length() >= 16) {
        answer = answer.substr(0, 15);
        if (answer.back() == '.') {
            answer.pop_back();
        }
    }
    
    while (answer.length() <= 2) {
        answer += answer.back();
    }
    
    return answer;
}