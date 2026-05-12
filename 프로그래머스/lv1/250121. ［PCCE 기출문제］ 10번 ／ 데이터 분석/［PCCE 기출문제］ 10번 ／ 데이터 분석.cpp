#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    unordered_map<string, int> col;
    col["code"] = 0;
    col["date"] = 1;
    col["maximum"] = 2;
    col["remain"] = 3;
    
    vector<vector<int>> filter;
    for (const auto& d : data) {
        if (d[col[ext]] < val_ext) {
            filter.push_back(d);
        }
    }
    
    sort(filter.begin(), filter.end(), [&col, sort_by](const vector<int>& a, const vector<int>& b) {
        return a[col[sort_by]] < b[col[sort_by]];
    });
    
    return filter;
}