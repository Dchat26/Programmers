#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    int foodlen = 1;
    for (auto& num : food) {
        foodlen += (num / 2) * 2;
    }
    
    string answer(foodlen, ' ');
    
    int left = 0;
    int right = foodlen - 1;
    for (int i = 1; i < food.size(); i++) {
        int count = food[i] / 2;
        
        while(count--) {
            answer[left++] = i + '0';
            answer[right--] = i + '0';
        }
    }
    answer[left] = '0';
    
    return answer;
}