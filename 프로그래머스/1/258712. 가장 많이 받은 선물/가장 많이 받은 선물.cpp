#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int flen = friends.size();
    
    unordered_map<string, int> fidx;
    for (int i = 0; i < flen; i++) {
        fidx[friends[i]] = i;
    }
    
    vector<vector<int>> gt(flen, vector<int>(flen, 0));
    
    for (const string& gift : gifts) {
        stringstream ss(gift);
        string giver, taker;
        ss >> giver >> taker;
        
        gt[fidx[giver]][fidx[taker]]++;
    }
    
    vector<int> gval(flen, 0);
    for (int i = 0; i < flen; i++) {
        int give_count = 0;
        int take_count = 0;
        
        for (int j = 0; j < flen; j++) {
            give_count += gt[i][j];
            take_count += gt[j][i]; 
        }
        gval[i] = give_count - take_count;
    }
    
    vector<int> giftval(flen, 0);
    for (int i = 0; i < flen - 1; i++) {
        for (int j = i + 1; j < flen; j++) {
            
            if (gt[i][j] > gt[j][i]) {
                giftval[i]++;
            }
            else if (gt[i][j] < gt[j][i]) {
                giftval[j]++;
            }
            else {
                if (gval[i] > gval[j]) {
                    giftval[i]++;
                } else if (gval[i] < gval[j]) {
                    giftval[j]++;
                }
            }
        }
    }
    
    return *max_element(giftval.begin(), giftval.end());
}