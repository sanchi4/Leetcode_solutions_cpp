//https://leetcode.com/problems/remove-linked-list-elements/

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
        ListNode* headNode = head;
        while(headNode && headNode->val == val) headNode=headNode->next;
        head=headNode;
        while(head){
            if(head->next && head->next->val==val)head->next = head->next->next;
            else
                head=head->next;
        }
        return headNode;
    }
};