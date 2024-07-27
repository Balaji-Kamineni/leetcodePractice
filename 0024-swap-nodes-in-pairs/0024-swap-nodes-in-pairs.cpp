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
int length(ListNode* head)
{
    int cnt=0;
    while(head && ++cnt)
    {
        head=head->next;
    }
    return cnt;
}
    ListNode* swapPairs(ListNode* head) {
        if(length(head)<2)
        return head;
        ListNode *curr=head,*prev=NULL,*frwd=NULL;
        for(int i=0;i<2;i++)
        {
            frwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frwd;
        }
        head->next=swapPairs(curr);
        return prev;  
    }
};