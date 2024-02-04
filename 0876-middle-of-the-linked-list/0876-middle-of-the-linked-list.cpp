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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp =head;
        // int cnt=0;
        // while(temp != nullptr){
        //     cnt +=1;
        //     temp = temp->next;
        // }
        // temp= head;
        // for(int i =1;i<(cnt/2)+1;i++){
        //     temp = temp->next;
        // }
        // return temp;
        // above approach is brute force

        ListNode* slow=head;
        ListNode* fast= head;
        while(fast != nullptr && fast->next != nullptr){
            slow= slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};