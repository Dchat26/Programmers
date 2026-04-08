#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int solution(vector<int> nums) {
    unordered_set<int> hash_set(nums.begin(), nums.end());
    
    return min((int)hash_set.size(), (int)nums.size() / 2);
}