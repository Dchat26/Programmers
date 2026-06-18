#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    int n = id_list.size();
    vector<int> answer(n, 0);
    
    unordered_map<string, int> user_idx;
    for (int i = 0; i < n; i++) {
        user_idx[id_list[i]] = i;
    }
    
    vector<set<string>> reported_by(n);
    
    for (const string& r : report) {
        stringstream ss(r);
        string reporter, reported;
        ss >> reporter >> reported; 
        
        int reported_id = user_idx[reported];
        reported_by[reported_id].insert(reporter); 
    }
    
    for (int i = 0; i < n; i++) {
        if (reported_by[i].size() >= k) {
            for (const string& reporter : reported_by[i]) {
                int reporter_id = user_idx[reporter];
                answer[reporter_id]++;
            }
        }
    }
    
    return answer;
}