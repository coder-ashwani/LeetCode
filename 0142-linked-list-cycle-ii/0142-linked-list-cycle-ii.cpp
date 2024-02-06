/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // unordered_set<ListNode*> st;
        // while(head != NULL){
        //     if(st.find(head)!= st.end()) return head;
        //     st.insert(head);
        //     head= head->next;
        // }
        // return NULL;
        // this method is using hashing and we are storing all nodes in a set

        ListNode* slow= head;
        ListNode* fast= head;
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                slow=head;
                while(slow != fast){
                    slow = slow -> next;
                    fast= fast -> next;
                }
                return slow;
            }
        }
        return NULL;
    }
};