#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    int count[7] = {0};
    
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;
    
    int p = 0, q = 0, r = 0;
    
    for (int i = 1; i <= 6; i++) {
        if (count[i] == 4) return 1111 * i;
    }
    
    for (int i = 1; i <= 6; i++) {
        if (count[i] == 3) {
            p = i;
            for (int j = 1; j <= 6; j++) {
                if (count[j] == 1) q = j;
            }
            return (10 * p + q) * (10 * p + q);
        }
    }
    
    p = 0, q = 0;
    for (int i = 1; i <= 6; i++) {
        if (count[i] == 2) {
            if (p == 0) p = i;
            else q = i;
        }
    }
    
    if (p != 0 && q != 0) {
        return (p + q) * abs(p - q);
    }
    
    if (p != 0 && q == 0) {
        q = 0, r = 0;
        for (int i = 1; i <= 6; i++) {
            if (count[i] == 1) {
                if (q == 0) q = i;
                else r = i;
            }
        }
        return q * r;
    }
    
    for (int i = 1; i <= 6; i++) {
        if (count[i] == 1) return i;
    }
    
    return 0;
}