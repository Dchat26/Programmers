#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_in_delete_list(int target, int delete_list[], size_t delete_list_len) {
    for (size_t i = 0; i < delete_list_len; i++) {
        if (target == delete_list[i]) return true;
    }
    return false;
}

int* solution(int arr[], size_t arr_len, int delete_list[], size_t delete_list_len, int* answer_len) {
    bool* keep = (bool*)malloc(arr_len * sizeof(bool));
    size_t total_len = 0;

    for (size_t i = 0; i < arr_len; i++) {
        if (!is_in_delete_list(arr[i], delete_list, delete_list_len)) {
            keep[i] = true;
            total_len++;
        } else {
            keep[i] = false;
        }
    }

    int* answer = (int*)malloc(total_len * sizeof(int));
    if (answer == NULL) {
        free(keep);
        return NULL;
    }

    int k = 0;
    for (size_t i = 0; i < arr_len; i++) {
        if (keep[i]) {
            answer[k++] = arr[i];
        }
    }

    free(keep);
    return answer;
}