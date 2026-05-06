#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    vector<int> divisors(number + 1);
    
    for (int i = 1; i <= number; i++) {
        for (int j = i; j <= number; j += i) {
            divisors[j]++;
        }
    }
    
    int total = 0;
    for (int i = 1; i <= number; i++) {
        if (divisors[i] > limit) total += power;
        else total += divisors[i];
    }
    
    return total;
}