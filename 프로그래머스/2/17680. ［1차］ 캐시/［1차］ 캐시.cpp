#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    if (cacheSize == 0) {
        return cities.size() * 5;
    }
    
    vector<string> cache;
    int times = 0;
    
    for (auto& s : cities) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        auto it = find(cache.begin(), cache.end(), s);
        
        if (it != cache.end()) {
            cache.erase(it);
            cache.push_back(s);
            times += 1;
        }
        else {
            if (cache.size() >= cacheSize) {
                cache.erase(cache.begin());
            }
            cache.push_back(s);
            times += 5;
        }
    }
    
    return times;
}