#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int m = arr1.size();
    int k = arr1[0].size();
    int n = arr2[0].size();
    
    vector<vector<int>> answer;
    for (int i = 0; i < m; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int val = 0;
            for (int x = 0; x < k; x++) {
                val += arr1[i][x] * arr2[x][j];
            }
            temp.push_back(val);
        }
        answer.push_back(temp);
    }
    
    return answer;
}