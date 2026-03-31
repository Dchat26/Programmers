#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int chicken) {
    int coupon = chicken;
    int answer = 0;
    while (coupon >= 10) {
        int temp = coupon % 10;
        
        coupon /= 10;
        answer += coupon;
        coupon += temp;
    }
    
    return answer;
}