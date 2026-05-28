#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool is_match(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '[' && close == ']') return true;
    if (open == '{' && close == '}') return true;
    return false;
}

int solution(const char* s) {
    int len = strlen(s);
    int answer = 0;

    char* stack = (char*)malloc(len * sizeof(char));
    if (stack == NULL) return 0;
    
    for (int i = 0; i < len; i++) {
        int top = -1; 
        bool is_valid = true;
        
        for (int j = 0; j < len; j++) {
            char c = s[(i + j) % len];
            
            if (c == '(' || c == '[' || c == '{') {
                stack[++top] = c;
            } else {
                if (top == -1) {
                    is_valid = false;
                    break;
                }
                
                if (is_match(stack[top], c)) {
                    top--;
                } else {
                    is_valid = false;
                    break;
                }
            }
        }
        
        if (is_valid && top == -1) {
            answer++;
        }
    }
    
    free(stack);
    return answer;
}