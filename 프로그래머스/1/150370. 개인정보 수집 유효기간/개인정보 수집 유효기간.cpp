#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int dateToDays(string date) {
    int y = stoi(date.substr(0, 4));
    int m = stoi(date.substr(5, 2));
    int d = stoi(date.substr(8, 2));
    
    return (y * 12 * 28) + (m * 28) + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int today_days = dateToDays(today);
    
    unordered_map<char, int> term_map;
    for (string term : terms) {
        char type = term[0];                  
        int months = stoi(term.substr(2));   
        term_map[type] = months * 28;       
    }
    
    for (int i = 0; i < privacies.size(); i++) {
        int privacy_days = dateToDays(privacies[i].substr(0, 10));
        char type = privacies[i][11]; 
        
        if (privacy_days + term_map[type] <= today_days) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}