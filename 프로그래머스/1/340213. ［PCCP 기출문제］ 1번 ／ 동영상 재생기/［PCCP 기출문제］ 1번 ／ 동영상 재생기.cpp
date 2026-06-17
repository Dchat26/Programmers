#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int to_seconds(string time_str) {
    int m, s;
    sscanf(time_str.c_str(), "%d:%d", &m, &s);
    return m * 60 + s;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int total = to_seconds(video_len);
    int stotal = to_seconds(op_start);
    int etotal = to_seconds(op_end);
    int ptotal = to_seconds(pos);
    
    for (string cmd : commands) {
        if (ptotal >= stotal && ptotal <= etotal) {
            ptotal = etotal;
        }
        
        if (cmd == "prev") {
            ptotal = max(ptotal - 10, 0);
        } else {
            ptotal = min(ptotal + 10, total);
        }
        
        if (ptotal >= stotal && ptotal <= etotal) {
            ptotal = etotal;
        }
    }
    
    int m = ptotal / 60;
    int s = ptotal % 60;
    
    char buf[10];
    sprintf(buf, "%02d:%02d", m, s); 
    
    return string(buf);
}