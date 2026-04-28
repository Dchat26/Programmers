#include <iostream>

using namespace std;

int main(void) {
    int a = 0, b = 0;
    if (!(cin >> a >> b)) return 0;
    
    for (int i = 1; i <= a * b; i++) {
        cout << '*' << ((i % a == 0) ? "\n" : "");
    }
    
    return 0;
}