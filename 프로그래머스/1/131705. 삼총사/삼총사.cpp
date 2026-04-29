#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int nlen = number.size();
    int count = 0;
    for (int i = 0; i < nlen - 2; i++) {
        for (int j = i + 1; j < nlen - 1; j++) {
            for (int k = j + 1; k < nlen; k++) {
                if (number[i] + number[j] + number[k] == 0) count++;
            }
        }
    }
    
    return count;
}