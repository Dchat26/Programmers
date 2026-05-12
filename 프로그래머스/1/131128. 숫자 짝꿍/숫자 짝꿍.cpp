#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    for (int i = 9; i >= 0; i--) {
        char c = i + '0';
        
        int Xcount = count(X.begin(), X.end(), c);
        int Ycount = count(Y.begin(), Y.end(), c);
        
        int count = (Xcount < Ycount ? Xcount : Ycount);
        
        for (int j = 0; j < count; j++) {
            answer += c;
        }
    }
    
    if (answer.length() == 0) return "-1";
    if (answer[0] == '0') return "0";
    
    return answer;
}