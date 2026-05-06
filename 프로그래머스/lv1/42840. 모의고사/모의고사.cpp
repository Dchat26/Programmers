#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    int num1[5] = {1, 2, 3, 4, 5};
    int num2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int num3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> total(3, 0);
    
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == num1[i % 5]) total[0]++;
        if (answers[i] == num2[i % 8]) total[1]++;
        if (answers[i] == num3[i % 10]) total[2]++;
    }
    
    int max_val = *max_element(total.begin(), total.end());
    vector<int> answer;
    
    for (int i = 0; i < 3; i++) {
        if (total[i] == max_val) answer.push_back(i + 1);
    }
    
    return answer;
}