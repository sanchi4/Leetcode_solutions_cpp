//https://leetcode.com/problems/split-linked-list-in-parts/

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
    int length(ListNode* l){
        int cnt=0;
        while(l!=NULL){
            l=l->next;
            cnt++;
        }
        return cnt;
    }
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int len = length(root);
        int s = len/k;
        int rem = len%k;
        ListNode* start=root;
        vector<ListNode*> ans;
    
        while(k--){
            ListNode* temp=start;
            ans.push_back(temp);
            int cnt = s-1;
            while(cnt>0){
                temp=temp->next;
                cnt--;
            }
            if(rem && s!=0){
                temp=temp->next;
                rem--;
            }
            if(temp && temp->next)
            {
                start=temp->next;
                temp->next=NULL;
            }
            else {
                start=NULL;
            }
        }
        return ans;
    }
};