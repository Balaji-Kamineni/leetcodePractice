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
int size(ListNode* head)
{
    ListNode* dummy= head;
    int cnt=0;
    while(dummy)
    {
        dummy=dummy->next;
        cnt++;
    }
    return cnt;
}
    ListNode* deleteMiddle(ListNode* head) {
        int sz=size(head);    
   
     if(sz<=1) return NULL;
    int mid=sz/2;
  //  if(sz==mid) return head->next;
    ListNode* temp=head;
    while(mid-- >1)
    {
        temp=temp->next;
    }
    if(!temp) return NULL;
    temp->next=temp->next->next;
    return head;
        
    }
};