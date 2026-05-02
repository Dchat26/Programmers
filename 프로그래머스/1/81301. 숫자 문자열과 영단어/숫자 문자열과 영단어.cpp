#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = 0; i < 10; i++) {
        s = regex_replace(s, regex(num[i]), to_string(i));
    }
    
    return stoi(s);
}