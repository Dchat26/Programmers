#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    int zero = 0;
    int scount = 0;
    while (s != "1") {
        scount++;
        
        int current = count(s.begin(), s.end(), '0');
        
        zero += current;
        int left = s.length() - current;
        
        string next = "";
        while (left > 0) {
            next += to_string(left % 2);
            left /= 2;
        }
        reverse(next.begin(), next.end());
        
        s = next;
    }
    
    return {scount, zero};
}