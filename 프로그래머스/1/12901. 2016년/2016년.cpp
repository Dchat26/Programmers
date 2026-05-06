#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int months[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char day[7][5] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int total = b - 1;
    for (int i = 1; i < a; i++) {
        total += months[i];
    }
    
    return day[total % 7];
}