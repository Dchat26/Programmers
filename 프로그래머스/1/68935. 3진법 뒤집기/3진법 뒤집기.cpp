#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    string chars = "0123456789ABCDEF";
    string result = "";
    while (n > 0) {
        result += chars[n % 3];
        n /= 3;
    }
    
    //reverse(result.begin(), result.end());
    
    return stoi(result, nullptr, 3);
}