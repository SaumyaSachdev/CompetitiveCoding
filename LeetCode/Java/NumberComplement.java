//Easy - https://leetcode.com/problems/number-complement/
//Author - Saumya Sachdev

public class NumberComplement {
    public static int findComplement(int num) {
        int mask = Integer.highestOneBit(num) - 1;
        return ~num & mask;
    }

    public static void main(String args[]) {
        System.out.println(findComplement(17));
    }
}
