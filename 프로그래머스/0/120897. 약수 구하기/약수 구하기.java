class Solution {
    public int[] solution(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        
        int[] answer = new int[count];
        for (int j = 0, i = 1; i <= n; i++) {
            if (n % i == 0) {
                answer[j++] = i;
            }
        }
        
        return answer;
    }
}