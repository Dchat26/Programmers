#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

struct Word {
    string str;
    int start;
    int end;
    int original_idx;
};

int solution(string message, vector<vector<int>> spoiler_ranges) {
    vector<Word> words;
    int n = message.length();
    
    int i = 0;
    int w_idx = 0;
    while (i < n) {
        if (message[i] == ' ') {
            i++;
            continue;
        }
        int start = i;
        while (i < n && message[i] != ' ') {
            i++;
        }
        int end = i - 1;
        string str = message.substr(start, end - start + 1);
        words.push_back({str, start, end, w_idx++});
    }
    
    vector<pair<string, int>> spoiler_words;
    unordered_set<string> non_spoiler_set;
    
    for (const auto& w : words) {
        bool is_spoiler = false;
        for (const auto& r : spoiler_ranges) {
            if (max(w.start, r[0]) <= min(w.end, r[1])) {
                is_spoiler = true;
                break;
            }
        }
        
        if (is_spoiler) {
            spoiler_words.push_back({w.str, w.original_idx});
        } else {
            non_spoiler_set.insert(w.str);
        }
    }
    
    int important_count = 0;
    unordered_set<string> used_important_words;
    
    for (const auto& sw : spoiler_words) {
        if (non_spoiler_set.count(sw.first)) continue;
        if (used_important_words.count(sw.first)) continue;
        
        important_count++;
        used_important_words.insert(sw.first);
    }
    
    return important_count;
}