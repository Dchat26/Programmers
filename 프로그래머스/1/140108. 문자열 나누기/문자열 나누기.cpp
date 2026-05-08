#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int m = 0;
    int n = 0;
    char mc;
    for (const auto& c : s) {
        if (m == 0) {
            mc = c;
            m++;
            continue;
        }
        
        if (mc == c) {
            m++;
        }
        else {
            n++;
        }
        
        if (m == n) {
            answer++;
            m = 0;
            n = 0;
        }
    }
    
    if (m > 0) answer++;
    
    return answer;
}