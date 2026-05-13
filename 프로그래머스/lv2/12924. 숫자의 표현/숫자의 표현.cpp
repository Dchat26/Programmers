#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        int target = i;
        int temp = 0;
        while (temp <= n) {
            if (temp == n) {
                answer++;
                break;
            }
            
            temp += target;
            target++;
        }
    }
    
    return answer;
}