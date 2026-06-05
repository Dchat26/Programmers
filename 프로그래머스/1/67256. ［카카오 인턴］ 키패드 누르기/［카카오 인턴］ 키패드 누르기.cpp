#include <string>
#include <vector>
#include <cmath> 
#include <utility>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    pair<int, int> pos[10] = {
        {3, 1},
        {0, 0}, {0, 1}, {0, 2},
        {1, 0}, {1, 1}, {1, 2},
        {2, 0}, {2, 1}, {2, 2}
    };
    
    pair<int, int> left_pos = {3, 0};
    pair<int, int> right_pos = {3, 2};
    
    for (int num : numbers) {
        if (num == 1 || num == 4 || num == 7) {
            answer += "L";
            left_pos = pos[num];
        } 
        else if (num == 3 || num == 6 || num == 9) {
            answer += "R";
            right_pos = pos[num];
        } 
        else {
            pair<int, int> target = pos[num];
            
            int left_dist = abs(left_pos.first - target.first) + abs(left_pos.second - target.second);
            int right_dist = abs(right_pos.first - target.first) + abs(right_pos.second - target.second);
            
            if (left_dist < right_dist) {
                answer += "L";
                left_pos = target;
            } 
            else if (right_dist < left_dist) {
                answer += "R";
                right_pos = target;
            } 
            else {
                if (hand == "left") {
                    answer += "L";
                    left_pos = target;
                } else {
                    answer += "R";
                    right_pos = target;
                }
            }
        }
    }
    
    return answer;
}