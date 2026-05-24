#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int n = elements.size();
    
    vector<int> ex = elements;
    ex.insert(ex.end(), elements.begin(), elements.end());
    
    unordered_set<int> answer;
    for (int i = 0; i < n; i++) {
        int current = 0;
        for (int j = 0; j < n; j++) {
            current += ex[i + j];
            answer.insert(current);
        }
    }
    
    return answer.size();
}