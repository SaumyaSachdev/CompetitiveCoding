//Medium - https://leetcode.com/problems/find-the-winner-of-an-array-game/
//Author - Saumya Sachdev

public class GameWinner {
    public static int getWinner(int[] arr, int k) {
        int winCount = 0;
        int current = arr[0];
        for(int i=1; i<arr.length; i++) {
            if(arr[i] > current) {
                current = arr[i];
                winCount = 0;
            }
            winCount++;
            if(winCount == k)
                break;
        }
        return current;
    }

    public static void main(String args[]) {
        int[] input = {2,1,3,5,4,6,7};
        System.out.println(getWinner(input, 2));
    }
}
