#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> cloth;
    
    for (const auto& item : clothes) {
        cloth[item[1]]++;
    }
    
    int answer = 1;
    for (const auto& pair : cloth) {
        answer *= (pair.second + 1);
    }
    
    return answer - 1;
}