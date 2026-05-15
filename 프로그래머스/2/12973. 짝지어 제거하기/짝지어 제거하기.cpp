#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<char> slist;
    for (const auto& c : s) {
        if (!slist.empty() && slist.top() == c) {
            slist.pop();
        }
        else {
            slist.push(c);
        }
    }
    
    return slist.empty() ? 1 : 0;
}