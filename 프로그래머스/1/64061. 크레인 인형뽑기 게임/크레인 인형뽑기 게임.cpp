#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    for (const auto& num : moves) {
        for (int i = 0; i < board.size(); i++) {
            if (board[i][num - 1] != 0) {
                int doll = board[i][num - 1];
                board[i][num - 1] = 0;
                
                if (!s.empty() && s.top() == doll) {
                    s.pop();
                    answer += 2;
                }
                else {
                    s.push(doll);
                }
                
                break;
            }
        }
    }
    
    return answer;
}