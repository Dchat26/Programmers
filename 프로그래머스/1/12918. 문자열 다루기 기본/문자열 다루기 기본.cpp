#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if (s.length() == 4 || s.length() == 6) {
        for (const auto& c : s) {
            if (!(isdigit(c))) return false;
        }
    }
    else return false;
    
    return true;
}