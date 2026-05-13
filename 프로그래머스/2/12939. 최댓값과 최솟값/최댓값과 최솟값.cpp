#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string s) {
    stringstream ss(s);
    
    int num;
    int min_val = 2147483647;
    int max_val = -2147483648;
    
    while (ss >> num) {
        min_val = min(min_val, num);
        max_val = max(max_val, num);
    }
    
    return to_string(min_val) + " " + to_string(max_val);
}
