#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_set<string> wordlist;
    wordlist.insert(words[0]);
    
    for (int i = 1; i < words.size(); i++) {
        string current = words[i];
        string prev_word = words[i - 1];
        
        if (prev_word.back() != current[0] || wordlist.find(current) != wordlist.end()) {
            return {i % n + 1, i / n + 1};
        }
        
        wordlist.insert(current);
    }
    
    return {0, 0};
}