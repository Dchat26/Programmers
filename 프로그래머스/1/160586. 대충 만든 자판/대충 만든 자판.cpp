#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for (const auto& sentence : targets) {
        int count = 0;
        bool possible = true;
        
        for (const auto& c : sentence) {
            vector<int> klist;
            for (const auto& key : keymap) {
                size_t pos = key.find(c);
                if (pos != string::npos) {
                    klist.push_back(pos + 1);
                }
            }
            
            if (klist.size() == 0) {
                possible = false;
                break;
            }
            
            count += *min_element(klist.begin(), klist.end());
        }
        
        if (possible) {
            answer.push_back(count);
        }
        else {
            answer.push_back(-1);
        }
    }
    
    return answer;
}