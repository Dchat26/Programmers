class Solution {
    public int solution(String str1, String str2) {
        int len = str2.length();
        for (int i = 0; i <= str1.length() - len; i++) {
            String res = str1.substring(i, i + len);
            
            if (res.equals(str2)) return 1;
        }
        
        return 2;
    }
}