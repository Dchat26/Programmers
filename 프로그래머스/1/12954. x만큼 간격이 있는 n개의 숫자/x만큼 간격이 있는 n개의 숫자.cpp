#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    long long target = x;
    while(n--) {
        answer.push_back(target);
        target += x;
    }
    
    return answer;
}