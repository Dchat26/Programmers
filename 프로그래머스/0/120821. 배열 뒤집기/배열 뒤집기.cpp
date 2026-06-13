#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int len = num_list.size();
    
    vector<int> arr(len);
    for (int i = 0; i < len; i++) {
        arr[i] = num_list[len - 1 - i];
    }
    
    return arr;
}