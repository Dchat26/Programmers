#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* ineq, const char* eq, int n, int m) {
    if (ineq[0] == '>' && eq[0] == '=') {
        if (n >= m) return 1;
    }
    else if (ineq[0] == '<' && eq[0] == '=') {
        if (n <= m) return 1;
    }
    else if (ineq[0] == '>' && eq[0] == '!') {
        if (n > m) return 1;
    }
    else if (ineq[0] == '<' && eq[0] == '!') {
        if (n < m) return 1;
    }
    
    return 0;
}