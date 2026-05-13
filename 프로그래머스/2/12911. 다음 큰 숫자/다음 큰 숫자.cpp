#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    string n2;
    int target = n;
    while (target > 0) {
        n2 += (target % 2) + '0';
        target /= 2;
    }
    int ncount = count(n2.begin(), n2.end(), '1');
    
    int cnt = 0;
    while (true) {
        cnt++;
        
        int target2 = n + cnt;
        string n3;
        while (target2 > 0) {
            n3 += (target2 % 2) + '0';
            target2 /= 2;
        }
        
        int tcount = count(n3.begin(), n3.end(), '1');
        
        if (ncount == tcount) return n + cnt;
    }
}