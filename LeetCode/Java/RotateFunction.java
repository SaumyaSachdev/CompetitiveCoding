//Medium - https://leetcode.com/problems/rotate-function/
//Author - Saumya Sachdev

public class RotateFunction {
    public static int maxRotateFunction(int[] A) {
        int max = 0, prev = 0, sum = 0;
        int len = A.length;
        for(int i=0; i<len; i++) {
            max += A[i]*i;
            sum += A[i];
        }
        prev = max;
        
        for(int i = len - 1; i >= 1; i--) {
            prev = prev + sum - len * A[i];
            max = Math.max(max, prev);
        }
        return max;
    }

    public static void main(String args[]) {
        int[] input = {4,3,2,6};
        System.out.println(maxRotateFunction(input));
    }
}
