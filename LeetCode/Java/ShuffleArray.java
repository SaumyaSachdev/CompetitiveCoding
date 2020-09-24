//Easy - https://leetcode.com/problems/shuffle-the-array/
//Author - Saumya Sachdev

public class ShuffleArray {
    public static int[] shuffle(int[] nums, int n) {
        int[] result = new int[2*n];
        int i = 0, j = n;
        int k = 0;
        while(i < n || j < 2*n) {
            if(k%2 == 0) {
                result[k] = nums[i];
                i++;
            } else {
                result[k] = nums[j];
                j++;
            }
            k++;
        }
        return result;
    }

    public static void main(String args[]) {
        int[] input = {1,2,3,4,4,3,2,1};
        int[] result = shuffle(input, 4);
        for(int i=0; i<result.length; i++) {
            System.out.print(result[i] + " ");
        }
        System.out.println();
    }
}
