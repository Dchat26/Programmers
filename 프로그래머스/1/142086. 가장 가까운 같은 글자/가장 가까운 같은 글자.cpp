#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.length());
    vector<int> alpidx(26, -1);
    
    for (int i = 0; i < s.length(); i++) {
        int charidx = s[i] - 'a';
        
        if (alpidx[charidx] == -1) {
            answer[i] = -1;
        }
        else {
            answer[i] = i - alpidx[charidx];
        }
        
        alpidx[charidx] = i;
    }
    
    return answer;
}