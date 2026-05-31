#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void dfs(int k, int count, int* answer, bool* visited, int** dungeons, int n) {
    if (count > *answer) {
        *answer = count;
    }
    
    for (int i = 0; i < n; i++) {
        if (!visited[i] && k >= dungeons[i][0]) {
            visited[i] = true;
            dfs(k - dungeons[i][1], count + 1, answer, visited, dungeons, n);
            visited[i] = false;
        }
    }
}

int solution(int k, int** dungeons, size_t dungeons_rows, size_t dungeons_cols) {
    int answer = 0;
    int n = dungeons_rows;
    
    bool* visited = (bool*)calloc(n, sizeof(bool));
    
    dfs(k, 0, &answer, visited, dungeons, n);
    
    free(visited);
    
    return answer;
}