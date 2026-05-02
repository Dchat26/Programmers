#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    
    int tmpsize = 0;
    for (const auto& c : score) {
        if (tmpsize < k) {
            temp.push_back(c);
            tmpsize++;
            
            sort(temp.begin(), temp.end());
        }
        else {
            if (c > temp[0]) {
                temp[0] = c;
                sort(temp.begin(), temp.end());
            }
        }
        
        answer.push_back(temp[0]);
    }
    
    return answer;
}