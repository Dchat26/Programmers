#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w = 0;
    int h = 0;
    for (const auto& card : sizes) {
        w = max(w, max(card[0], card[1]));
        h = max(h, min(card[0], card[1]));
    }
    
    return w * h;
}