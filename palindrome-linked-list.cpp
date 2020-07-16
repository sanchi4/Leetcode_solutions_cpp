https://leetcode.com/problems/palindrome-linked-list/

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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* next;
        ListNode* cur = head;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* other_half = reverse(slow);
        while(head!=NULL and other_half!=NULL){
            if(head->val!=other_half->val)return false;
            head=head->next;
            other_half=other_half->next;
        }
        return true;
    }
};