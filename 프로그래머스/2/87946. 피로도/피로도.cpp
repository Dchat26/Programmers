#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int k, int count, int& answer, vector<bool>& visited, vector<vector<int>>& dungeons, int n) {
    answer = max(count, answer);
    
    for (int i = 0; i < n; i++) {
        if (!visited[i] && k >= dungeons[i][0]) {
            visited[i] = true;
            dfs(k - dungeons[i][1], count + 1, answer, visited, dungeons, n);
            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int n = dungeons.size();
    vector<bool> visited(n, false);
    
    int answer = 0;
    
    dfs(k, 0, answer, visited, dungeons, n);
    
    return answer;
}