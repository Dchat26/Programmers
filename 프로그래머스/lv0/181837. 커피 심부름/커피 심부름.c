#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* order[], size_t order_len) {
    char* ame = "americano";
    char* lat = "cafelatte";
    
    int americano = 0;
    int latte = 0;
    for (int i = 0; i < order_len; i++) {
        if (strstr(order[i], ame) != NULL) americano++;
        else if (strstr(order[i], lat) != NULL) latte++;
        else americano++;
    }
    
    return americano * 4500 + latte * 5000;
}