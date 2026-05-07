#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int count = 0;
    int end = 0;
    for (int i = 0; i < section.size(); i++) {
        if (section[i] > end) {
            count++;
            
            end = section[i] + m - 1;
        }
    }
    
    return count;
}