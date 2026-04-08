#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compareSongs(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second; 
    }
    return a.first > b.first;      
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    unordered_map<string, int> genre_plays; 
    
    unordered_map<string, vector<pair<int, int>>> genre_songs; 

    for (int i = 0; i < genres.size(); i++) {
        genre_plays[genres[i]] += plays[i];
        genre_songs[genres[i]].push_back({plays[i], i});
    }

    vector<pair<string, int>> sorted_genres(genre_plays.begin(), genre_plays.end());
    
    sort(sorted_genres.begin(), sorted_genres.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });

    for (const auto& g : sorted_genres) {
        string genre = g.first;
        
        auto& songs = genre_songs[genre];
        sort(songs.begin(), songs.end(), compareSongs);
        
        for (int i = 0; i < songs.size() && i < 2; i++) {
            answer.push_back(songs[i].second); 
        }
    }

    return answer;
}