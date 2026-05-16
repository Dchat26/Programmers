#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int total = brown + yellow;
    for (int i = 1; i <= sqrt(yellow); i++) {
        if (yellow % i == 0) {
            int x = yellow / i;
            
            if ((x + 2) * (i + 2) == total) {
                return {x + 2, i + 2};
            }
        }
    }
}