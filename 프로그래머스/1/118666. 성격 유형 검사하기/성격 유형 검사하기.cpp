#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char, int> scores;
    
    for (int i = 0; i < survey.size(); i++) {
        int choice = choices[i];
        
        if (choice < 4) {
            scores[survey[i][0]] += (4 - choice);
        } else if (choice > 4) {
            scores[survey[i][1]] += (choice - 4);
        }
    }
    
    char types[4][2] = {{'R', 'T'}, {'C', 'F'}, {'J', 'M'}, {'A', 'N'}};
    
    for (int i = 0; i < 4; i++) {
        char type1 = types[i][0];
        char type2 = types[i][1];
        
        if (scores[type1] >= scores[type2]) {
            answer += type1;
        } else {
            answer += type2;
        }
    }
    
    return answer;
}