#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    vector<int> prime(n + 1, 1);
    prime[0] = 0;
    prime[1] = 0;
    
    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    
    return count(prime.begin(), prime.end(), 1);
}