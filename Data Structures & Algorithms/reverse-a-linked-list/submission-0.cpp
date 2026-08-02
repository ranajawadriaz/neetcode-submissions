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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        if(head!=NULL)
        {
            next=head->next;
            while(next!=NULL)
            {
                head->next=prev;
                prev=head;
                head=next;
                next=head->next;
            }
            head->next=prev;

        }
        
        return head;

        
    }
};
