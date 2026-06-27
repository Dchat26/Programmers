import java.util.Arrays;

class Solution {
    public int solution(int[] sides) {
        Arrays.sort(sides);
        
        int len = sides.length;
        
        return (sides[len - 1] < sides[len - 2] + sides[len - 3]) ? 1 : 2;
    }
}