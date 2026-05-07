#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    vector<string> speaks = {"aya", "ye", "woo", "ma"};
    
    for (string word : babbling) {
        if (word.find("ayaaya") != string::npos || 
            word.find("yeye") != string::npos || 
            word.find("woowoo") != string::npos || 
            word.find("mama") != string::npos) {
            continue;
        }
        
        for (string speak : speaks) {
            size_t pos = 0; // 검색을 시작할 위치
            
            while ((pos = word.find(speak)) != string::npos) {
                word.replace(pos, speak.length(), " "); 
            }
        }
        
        bool is_valid = true;
        for (char c : word) {
            if (c != ' ') { 
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            answer++;
        }
    }
    
    return answer;
}