//Easy - https://leetcode.com/problems/merge-two-sorted-lists/
//Author - Saumya Sachdev

class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}
 
public class MergeLists {
    public static ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1 == null)
            return l2;
        if(l2 == null)
            return l1;
        ListNode result = new ListNode(0);
        ListNode temp = result;
        while(l1 != null && l2 != null) {
            if(l1.val <= l2.val) {
                temp.next = l1;
                l1 = l1.next;
            } else {
                temp.next = l2;
                l2 = l2.next;
            }
            temp = temp.next;
        }
        temp.next = l1 == null ? l2 : l1;
        return result.next;
    }

    public static void main(String args[]) {
        ListNode l1 = new ListNode(1);
        ListNode l3 = new ListNode(2);
        ListNode l4 = new ListNode(4);
        ListNode l2 = new ListNode(1);
        ListNode l5 = new ListNode(3);
        ListNode l6 = new ListNode(4);

        l1.next = l3;
        l3.next = l4;
        l2.next = l5;
        l5.next = l6;

        ListNode result = mergeTwoLists(l1, l2);
        while(result != null) {
            System.out.println(result.val);
            result = result.next;
        }
    }
}