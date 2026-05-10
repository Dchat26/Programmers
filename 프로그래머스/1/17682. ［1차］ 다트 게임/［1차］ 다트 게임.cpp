#include <string>
#include <cctype>
#include <vector>

using namespace std;

int solution(string dartResult) {
    size_t pos = 0;
    while ((pos = dartResult.find("10", pos)) != string::npos) {
        dartResult.replace(pos, 2, "X");
        pos += 1;
    }
    
    vector<int> result;
    int idx = -1;
    
    for (const auto& c : dartResult) {
        if (isdigit(c)) {
            result.push_back(c - '0');
            idx++;
        }
        else if (c == 'X') {
            result.push_back(10);
            idx++;
        }
        else if (c == 'S' || c == 'D' || c == 'T') {
            if (c == 'S') {
                continue;
            }
            else if (c == 'D') {
                result[idx] = result[idx] * result[idx];
            }
            else {
                result[idx] = result[idx] * result[idx] * result[idx];
            }
        }
        else {
            if (c == '*') {
                if (idx > 0) {
                    result[idx - 1] *= 2;
                }
                result[idx] *= 2;
            }
            else if (c == '#') {
                result[idx] *= -1;
            }
        }
    }
    
    int count = 0;
    for (const auto& num : result) {
        count += num;
    }
    
    return count;
}