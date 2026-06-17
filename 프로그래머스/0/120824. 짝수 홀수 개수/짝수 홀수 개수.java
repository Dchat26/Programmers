class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = new int[2];
        
        int len = num_list.length;
        int a = 0;
        for (int num : num_list) {
            if (num % 2 == 0) {
                a++;
            }
        }
        
        answer[0] = a;
        answer[1] = len - a;
        
        return answer;
    }
}