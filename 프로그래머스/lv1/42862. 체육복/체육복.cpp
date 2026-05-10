#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    set<int> l(lost.begin(), lost.end());
    set<int> r(reserve.begin(), reserve.end());
    
    set<int> real_reserve;
    set<int> real_lost;
    
    set_difference(r.begin(), r.end(), l.begin(), l.end(), inserter(real_reserve, real_reserve.begin()));
    set_difference(l.begin(), l.end(), r.begin(), r.end(), inserter(real_lost, real_lost.begin()));
    
    for (int res : real_reserve) {
        if (real_lost.find(res - 1) != real_lost.end()) {
            real_lost.erase(res - 1);
        }
        else if (real_lost.find(res + 1) != real_lost.end()) {
            real_lost.erase(res + 1);
        }
    }
    
    return n - real_lost.size();
}