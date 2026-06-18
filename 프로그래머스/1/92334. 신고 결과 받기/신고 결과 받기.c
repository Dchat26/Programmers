#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int get_user_index(const char* name, const char* id_list[], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(name, id_list[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    int n = (int)id_list_len;
    
    int* answer = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) answer[i] = 0;
    
    qsort(report, report_len, sizeof(char*), compare_strings);
    
    int* report_count = (int*)calloc(n, sizeof(int));
    
    for (size_t i = 0; i < report_len; i++) {
        if (i > 0 && strcmp(report[i], report[i - 1]) == 0) {
            continue;
        }
        
        char buf[50];
        strcpy(buf, report[i]);
        char* reporter = strtok(buf, " ");
        char* reported = strtok(NULL, " ");
        
        int reported_idx = get_user_index(reported, id_list, n);
        report_count[reported_idx]++;
    }
    
    for (size_t i = 0; i < report_len; i++) {
        if (i > 0 && strcmp(report[i], report[i - 1]) == 0) {
            continue;
        }
        
        char buf[50];
        strcpy(buf, report[i]);
        char* reporter = strtok(buf, " ");
        char* reported = strtok(NULL, " ");
        
        int reporter_idx = get_user_index(reporter, id_list, n);
        int reported_idx = get_user_index(reported, id_list, n);
        
        if (report_count[reported_idx] >= k) {
            answer[reporter_idx]++;
        }
    }
    
    free(report_count);
    return answer;
}