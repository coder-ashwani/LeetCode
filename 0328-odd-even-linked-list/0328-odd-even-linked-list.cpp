/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // Even  pointer is always ahead of odd node pointer
        // we have to memorize the even head so that we can connect to odd last node to evenhead
       
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=head->next;
        

        while(even != nullptr && even->next != nullptr){
            odd->next =odd->next->next;
            even->next=even->next->next;
            odd =  odd->next;
            even = even->next;
        }
        odd->next=evenhead;
        return head;
        
    }
};