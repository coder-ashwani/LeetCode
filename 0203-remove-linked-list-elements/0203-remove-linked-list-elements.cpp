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
    ListNode* removeElements(ListNode* head, int val) {
     // here we are using a concept of dummynode
    //  created a dummynode that points to a head node and curr node 
    //  is pointed to a temp node so that head element can also be deleted
     
      ListNode* temp= new ListNode(0);
      temp->next = head;
      ListNode* curr= temp;
      while(curr->next != nullptr){
          if(curr->next->val == val){
              curr->next= curr->next->next;
          }
          else{
              curr= curr->next;
          }
      }
      return temp->next;
    }
};