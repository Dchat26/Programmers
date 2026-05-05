#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    unordered_map<string, int> score_map;
    for (int i = 0; i < name.size(); i++) {
        score_map[name[i]] = yearning[i];
    }
    
    for (const auto& nlist : photo) {
        int nsum = 0;
        for (const auto& c : nlist) {
            if (score_map.count(c)) {
                nsum += score_map[c];
            }
        }
        answer.push_back(nsum);
    }
    
    
    return answer;
}