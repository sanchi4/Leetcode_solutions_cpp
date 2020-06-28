//https://leetcode.com/problems/add-two-numbers/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* sum=new ListNode();
        ListNode* curr=sum;
        while(l1!=NULL && l2!=NULL){
            int value = l1->val + l2->val + carry;
            carry=value/10;
            curr->next=new ListNode(value%10);
            curr=curr->next;
            l1=l1->next;
            l2=l2->next;

        }
        while(l1!=NULL){
            int value = l1->val + carry;
            carry=value/10;
            curr->next=new ListNode(value%10);
            curr=curr->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            int value = l2->val + carry;
            carry=value/10;
            curr->next=new ListNode(value%10);
            curr=curr->next;
            l2=l2->next;
        }
        if(carry){
            curr->next=new ListNode(carry);
            curr=curr->next;
        }
        sum=sum->next;
        return sum;
    }
};
