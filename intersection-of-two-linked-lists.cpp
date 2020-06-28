//https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)return NULL;
        ListNode* currA=headA;
        ListNode* currB=headB;
        while(currA!=currB){
            if(currA==NULL)currA=headB;
            else if(currB==NULL)currB=headA;
            else{
                currA=currA->next;
                currB=currB->next;
            }
        }
        return currA;
    }
};
