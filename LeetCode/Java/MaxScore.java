//Easy - https://leetcode.com/problems/maximum-score-after-splitting-a-string/
//Author - Saumya Sachdev

public class MaxScore {
    public static int maxScore(String s) {
        int n = s.length();
        int oneCount = 0;
        for(int i = 0; i < n; i++) {
            if(s.charAt(i) == '1')
                oneCount++;
        }
        int max = 0;
        int zeroCount = 0;
        for(int i = 0; i < n - 1; i++) {
            if(s.charAt(i) == '0')
                zeroCount++;
            else
                oneCount--;
            max = Math.max(max, oneCount + zeroCount);
        }
        return max;
    }

    public static void main(String args[]) {
        String s = "011101";
        System.out.println(maxScore(s));
    }
}
