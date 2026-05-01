#include <stdio.h>
#include <string.h>

int main() {
    int n = 0, k = 0;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    int queue[1000];
    int front = 0; 
    int rear = 0;  
    int count = 0;

    while(n--) {
        char temp[10];
        int num = 0;
        
        if (scanf("%9s", temp) != 1) return 0;

        if (strcmp(temp, "push") == 0) {
            if (scanf("%d", &num) != 1) return 0;

            if (count == k) {
                printf("Overflow\n");
            }
            else {
                queue[rear] = num;
                rear = (rear + 1) % k; 
                count++;
            }
        }
        else if (strcmp(temp, "pop") == 0) {
            if (count == 0) {
                printf("Underflow\n");
            }
            else {
                printf("%d\n", queue[front]);
                front = (front + 1) % k; 
                count--;
            }
        }
    }

    return 0;
}