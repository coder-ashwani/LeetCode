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
    ListNode* reverseLL(ListNode* head) {
    if (head == nullptr || head->next == nullptr) { 
        return head; 
    }

    ListNode* newHead = reverseLL(head->next);
    ListNode* front = head->next; 
    front->next = head;
    head->next = NULL;
    return newHead;
    }

    bool isPalindrome(ListNode* head) {
        // stack<int> st;
        // ListNode* temp= head;
        // while(temp != nullptr){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp != nullptr){
        //     if(temp->val != st.top()){
        //         return false;
        //     }
        //     st.pop();
        //     temp=temp->next;
        // }
        // return true;    // taking extra space

        if(head==nullptr || head->next == nullptr) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverseLL(slow->next);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second != nullptr){
            if(first->val != second->val){
                reverseLL(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseLL(newhead);
        return true;
        
    }
};