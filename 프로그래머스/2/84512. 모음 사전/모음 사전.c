#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char all_words[3905][6];
int word_count = 0;

char elements[5] = {'A', 'E', 'I', 'O', 'U'};

void dfs(char* current, int current_len, int max_len) {
    if (current_len > 0) {
        current[current_len] = '\0';
        strcpy(all_words[word_count++], current);
    }

    if (current_len == max_len) {
        return;
    }

    for (int i = 0; i < 5; i++) {
        current[current_len] = elements[i];
        dfs(current, current_len + 1, max_len);
    }
}

int compare(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

int solution(const char* word) {
    word_count = 0; 
    char temp[6] = "";

    dfs(temp, 0, 5);

    qsort(all_words, word_count, sizeof(all_words[0]), compare);

    for (int i = 0; i < word_count; i++) {
        if (strcmp(all_words[i], word) == 0) {
            return i + 1;
        }
    }

    return -1;
}