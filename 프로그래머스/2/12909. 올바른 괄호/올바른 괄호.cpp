#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == '(') count++;
        else {
            if (count > 0) count--;
            else return false;
        }
    }
    
    return count == 0;
}