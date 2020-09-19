//Medium - https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
//Author - Saumya Sachdev

public class RemoveDuplicate {
    public static int removeDuplicates(int[] nums) {
        if(nums == null || nums.length == 0)
            return 0;

        int left = 2;
        for(int right=2; right<nums.length; right++) {
            if(nums[left - 2] != nums[right])
                nums[left++] = nums[right];
        }
        return left;
    }

    public static void main(String args[]) {
        int[] input = {1,1,1,2,2,3};
        System.out.println(removeDuplicates(input));
    }
}
