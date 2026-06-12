class Solution {
    public double solution(int[] numbers) {
        int val = 0;
        for (int num : numbers) {
            val += num;
        }
        
        return (double)val / numbers.length;
    }
}