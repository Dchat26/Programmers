#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> elements = {'A', 'E', 'I', 'O', 'U'};
vector<string> all_words;

void dfs(string current, int max_len) {
    if (!current.empty()) {
        all_words.push_back(current);
    }
    
    if (current.length() == max_len) {
        return;
    }
    
    for (int i = 0; i < elements.size(); i++) {
        dfs(current + elements[i], max_len);
    }
}

int solution(string word) {
    dfs("", 5);

    sort(all_words.begin(), all_words.end());
    
    int index = find(all_words.begin(), all_words.end(), word) - all_words.begin();
    
    return index + 1;
}