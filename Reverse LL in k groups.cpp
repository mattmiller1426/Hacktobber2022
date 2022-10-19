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
    ListNode* solve(ListNode * head, int k, int n){
        if(n==0 || head == NULL)
        return head;
        int c=0;
        ListNode * cur=head;
        ListNode* prev= NULL;
        ListNode* next=head;
        if(head->next)
        next=head->next;
        while(cur && c < k){
            c++;
            next= cur->next;
            cur->next = prev;
            prev =  cur;
            cur= next;
            // if(next)
        }
        if(next)
        head->next =solve(next, k,n-1);
        return prev;

    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size=0;
        ListNode *temp =  head;
        while(temp){
            ++size;
            temp = temp->next;
        }
        int no_rev = size/k;
        if(k > size)
        return head;
      ListNode*ans=  solve(head,k,no_rev);
        return ans;
    }
};
