#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s) {
    int pcount = count_if(s.begin(), s.end(), [](char c){ return tolower(c) == 'p'; });
    int ycount = count_if(s.begin(), s.end(), [](char c){ return tolower(c) == 'y'; });
    
    return pcount == ycount;
}