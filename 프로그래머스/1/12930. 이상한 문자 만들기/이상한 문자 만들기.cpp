#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    int idx = 0;
    for (auto& c : s) {
        if (c == ' ') {
            idx = 0;
            continue;
        }
        
        if (idx % 2 == 0) {
            if (islower(c)) {
                c = toupper(c);
            }
        }
        else {
            if (isupper(c)) {
                c = tolower(c);
            }
        }
        
        idx++;
    }
    
    return s;
}