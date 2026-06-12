#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int H = park.size();
    int W = park[0].size();
    
    int r = 0, c = 0;
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (park[i][j] == 'S') {
                r = i;
                c = j;
                break;
            }
        }
    }
    
    for (string route : routes) {
        char dir = route[0];
        int dist = route[2] - '0'; 
        
        int dr = 0, dc = 0;
        if (dir == 'N') dr = -1;
        else if (dir == 'S') dr = 1;
        else if (dir == 'W') dc = -1;
        else if (dir == 'E') dc = 1;
        
        int temp_r = r, temp_c = c;
        bool is_valid = true;
        
        for (int i = 0; i < dist; i++) {
            temp_r += dr;
            temp_c += dc;
            
            if (temp_r < 0 || temp_r >= H || temp_c < 0 || temp_c >= W || park[temp_r][temp_c] == 'X') {
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            r = temp_r;
            c = temp_c;
        }
    }
    
    return {r, c};
}