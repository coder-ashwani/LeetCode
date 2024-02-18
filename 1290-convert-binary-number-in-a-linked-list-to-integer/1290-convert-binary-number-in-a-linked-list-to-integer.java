/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int getDecimalValue(ListNode head) {
        // Loop	Character	Operation	  Result
        // 1	    ‘1’	        1	          1
        // 2	    ‘0’	        (1x2) + 0	  2
        // 3	    ‘1’	        (2*2) + 1	  5
        // intution

        ListNode temp=head;
        int num=0;
        while(temp != null){
            num= num*2+ temp.val;
            temp= temp.next;
        }
        return num;
        
    }
}