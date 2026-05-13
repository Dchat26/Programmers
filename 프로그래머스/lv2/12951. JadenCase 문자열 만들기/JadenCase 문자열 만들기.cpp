#include <string>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = s; 
    
    bool is_first = true; 
    for (int i = 0; i < answer.length(); i++) {
        if (answer[i] == ' ') {
            is_first = true;
        } 
        else {
            if (is_first) {
                answer[i] = toupper(answer[i]);
                is_first = false;
            } 
            else {         
                answer[i] = tolower(answer[i]);
            }
        }
    }
    
    return answer;
}