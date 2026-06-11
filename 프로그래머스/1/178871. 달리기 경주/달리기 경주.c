#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 130007

typedef struct {
    const char* name;
    int rank;
} HashNode;

HashNode hash_table[TABLE_SIZE];

unsigned long get_hash(const char* str) {
    unsigned long h = 5381;
    int c;
    while ((c = *str++)) {
        h = ((h << 5) + h) + c;
    }
    return h % TABLE_SIZE;
}

void hash_insert(const char* name, int rank) {
    unsigned long idx = get_hash(name);
    while (hash_table[idx].name != NULL) {
        idx = (idx + 1) % TABLE_SIZE;
    }
    hash_table[idx].name = name;
    hash_table[idx].rank = rank;
}

int hash_get_node_idx(const char* name) {
    unsigned long idx = get_hash(name);
    while (hash_table[idx].name != NULL) {
        if (strcmp(hash_table[idx].name, name) == 0) {
            return (int)idx;
        }
        idx = (idx + 1) % TABLE_SIZE;
    }
    return -1;
}

char** solution(const char* players[], size_t players_len, const char* callings[], size_t callings_len) {
    memset(hash_table, 0, sizeof(hash_table));
    
    char** answer = (char**)malloc(sizeof(char*) * players_len);
    for (size_t i = 0; i < players_len; i++) {
        answer[i] = (char*)malloc(sizeof(char) * (strlen(players[i]) + 1));
        strcpy(answer[i], players[i]);
        
        hash_insert(answer[i], (int)i);
    }
    
    for (size_t i = 0; i < callings_len; i++) {
        int called_hash_idx = hash_get_node_idx(callings[i]);
        int current_rank = hash_table[called_hash_idx].rank;
        int front_rank = current_rank - 1;
        
        char* front_player = answer[front_rank];
        int front_hash_idx = hash_get_node_idx(front_player);
        
        char* temp = answer[current_rank];
        answer[current_rank] = answer[front_rank];
        answer[front_rank] = temp;
        
        hash_table[called_hash_idx].rank = front_rank;
        hash_table[front_hash_idx].rank = current_rank;
    }
    
    return answer;
}