//Easy - https://leetcode.com/problems/kth-largest-element-in-a-stream/
//Author - Saumya Sachdev

import java.util.PriorityQueue;

public class KthLargest {
    PriorityQueue<Integer> heap;
    int k;
    
    public KthLargest(int k, int[] nums) {
        this.k = k;
        heap = new PriorityQueue<>();
        for(int i : nums)
            heap.add(i);
    }
    
    public int add(int val) {
        heap.offer(val);
        while(heap.size() > k) {
            heap.poll();
        }
        return heap.peek();
    }

    public static void main(String args[]) {
        int[] nums = {4,5,8,2};
        KthLargest obj = new KthLargest(3, nums);
        System.out.println(obj.add(3));
        System.out.println(obj.add(5));
        System.out.println(obj.add(10));
        System.out.println(obj.add(9));
        System.out.println(obj.add(4));
    }
}
