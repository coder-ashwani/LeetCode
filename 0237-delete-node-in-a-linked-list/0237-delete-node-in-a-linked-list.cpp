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
    void deleteNode(ListNode* node) {
        node->val= node->next->val; 
        // current node mei next node ka data daal diya 
        node->next= node->next->next;
        // current node ko next to next node ke address peoint kara diya
    }
};