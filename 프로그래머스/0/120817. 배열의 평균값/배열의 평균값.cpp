#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    int val = accumulate(numbers.begin(), numbers.end(), 0);
    
    return (double)val / numbers.size();
}