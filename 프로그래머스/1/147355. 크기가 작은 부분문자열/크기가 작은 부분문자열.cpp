#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int tlen = t.length();
    int plen = p.length();
    
    int count = 0;
    for (int i = 0; i <= (tlen - plen); i++) {
        if (stoll(t.substr(i, plen)) <= stoll(p)) {
            count++;
        }
    }
    
    return count;
}