#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> temp;
    
    int nlen = numbers.size();
    for (int i = 0; i < nlen - 1; i++) {
        for (int j = i + 1; j < nlen; j++) {
            temp.insert(numbers[i] + numbers[j]);
        }
    }
    
    vector<int> answer(temp.begin(), temp.end());
    
    return answer;
}