class Solution {
    public int solution(int n) {
        int len = (int)(n / 2);
        for (int i = 1; i <= len; i++) {
            if (i * i == n) return 1;
        }
        
        return 2;
    }
}