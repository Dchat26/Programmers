#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (auto& c : s) {
        if (c == ' ') continue;
        
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + n) % 26 + 'a';
        }
        else {
            c = (c - 'A' + n) % 26 + 'A';
        }
    }
    
    return s;
}