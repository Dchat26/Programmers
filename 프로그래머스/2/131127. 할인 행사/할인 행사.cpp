#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    unordered_map<string, int> wantdict;
    for (size_t i = 0; i < want.size(); i++) {
        wantdict[want[i]] = number[i];
    }

    int total = 0;
    for (int num : number) total += num;

    for (size_t i = 0; i <= discount.size() - total; i++) {
        unordered_map<string, int> tempdict;
        
        for (int j = 0; j < total; j++) {
            tempdict[discount[i + j]]++;
        }

        bool is_match = true;
        for (size_t k = 0; k < want.size(); k++) {
            string item = want[k];
            
            if (tempdict[item] != wantdict[item]) {
                is_match = false;
                break;
            }
        }

        if (is_match) answer++;
    }

    return answer;
}