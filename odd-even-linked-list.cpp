//https://leetcode.com/problems/odd-even-linked-list/

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
        if(!head || !head->next)return head;
        ListNode* odd = head;
        ListNode* evenHead = head->next;
        ListNode* even = head->next;
        while(odd!=NULL && even!=NULL){
            odd->next = even->next;
            if(odd->next==NULL)break;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        if(even==NULL){
            odd->next = evenHead;
        }
        else{
            odd->next=evenHead;
        }
        return head;
    }
};