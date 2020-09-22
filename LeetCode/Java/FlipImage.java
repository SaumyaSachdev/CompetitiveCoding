//Easy - https://leetcode.com/problems/flipping-an-image/
//Author - Saumya Sachdev

public class FlipImage {
    public static int[][] flipAndInvertImage(int[][] A) {
        for(int i=0; i<A.length; i++) {
            int length = A[i].length;
            int start = 0, end = length-1;
            while(start<end) {
                int temp = A[i][start];
                A[i][start] = A[i][end];
                A[i][end] = temp;
                start++;
                end--;
            }
        }
        
        for(int i=0; i<A.length; i++) {
            for(int j=0; j<A[i].length; j++) {
                if(A[i][j] == 0)
                    A[i][j] = 1;
                else
                    A[i][j] = 0;
            }
        }
        return A;
    }

    public static void main(String args[]) {
        int[][] A = {{1,1,0},{1,0,1},{0,0,0}};
        flipAndInvertImage(A);
        for(int i=0; i<A.length; i++) {
            for(int j=0; j<A[i].length; j++) {
                System.out.print(A[i][j] + " ");
            }
            System.out.println();
        }
    }
}