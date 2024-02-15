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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head == NULL || head->next == NULL) return head;
       ListNode* tail=head;
       int len=1;
       while(tail->next != NULL){
           ++len;
           tail=tail->next;
       } 
       if(k % len == 0) return head;
       k= k % len;
       tail->next= head; // pointing last node to head
       ListNode* temp=head;
       for(int i=0;i<len-k-1;i++){
           temp=temp->next;
       }
    //    ListNode* newlastnode = findNnode(head,len-k); // function 
    //    head= newlastnode->next;
    //    newlastnode->next =NULL;
        head= temp->next;
        temp->next = NULL;
       return head;

    }
    // ListNode* findNnode(ListNode* temp, int k){
    //     int cnt=1;
    //     while(temp != NULL){
    //         if(cnt == k) return temp;
    //         cnt++;
    //         temp=temp->next;
    //     }
    //     return temp;
    // }
};