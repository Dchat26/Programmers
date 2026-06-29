class Solution {
    public int[] solution(int[] array) {
        int[] answer = new int[2];
        
        int max_val = -1;
        int idx = -1;
        for (int i = 0; i < array.length; i++) {
            if (array[i] > max_val) {
                max_val = array[i];
                idx = i;
            }
        }
        
        answer[0] = max_val;
        answer[1] = idx;
        
        return answer;
    }
}