#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int row = park.size();
    int col = park[0].size();
    
    vector<vector<int>> dp(row, vector<int>(col, 0));
    int max_square = 0;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (park[i][j] == "-1") {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } 
                else {
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                }
                
                max_square = max(max_square, dp[i][j]);
            }
        }
    }
    
    sort(mats.begin(), mats.end(), greater<int>());
    
    for (int mat : mats) {
        if (mat <= max_square) {
            return mat;
        }
    }
    
    return -1;
}