class Solution {
    public String solution(String my_string, int n) {
        String answer = "";
        
        for (char c : my_string.toCharArray()) {
            String temp = "";
            for (int i = 0; i < n; i++) {
                temp += c;
            }
            answer += temp;
        }
        
        return answer;
    }
}