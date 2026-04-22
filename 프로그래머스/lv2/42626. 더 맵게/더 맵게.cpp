#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
    
    int count = 0;
    while (pq.top() < K) {
        if (pq.size() < 2) return -1;
        
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        
        pq.push(a + (b * 2));
        count++;
    }
    
    return count;
}