#include <iostream>
#include <string>

using namespace std;

int main() {
	int n = 0, k = 0;
	if (!(cin >> n >> k)) return 0;

	int queue[1000];
	int front = 0;
	int rear = 0;
	int count = 0;

	while (n--) {
		string temp;
		int num = 0;

		if (!(cin >> temp)) return 0;

		if (temp == "push") {
			if (!(cin >> num)) return 0;

			if (count == k) {
				cout << "Overflow\n";
			}
			else {
				queue[rear] = num;
				rear = (rear + 1) % k;
				count++;
			}
		}
		else if (temp == "pop") {
			if (count == 0) {
				cout << "Underflow\n";
			}
			else {
				cout << queue[front] << "\n";

				front = (front + 1) % k;
				count--;
			}
		}
	}

	return 0;
}