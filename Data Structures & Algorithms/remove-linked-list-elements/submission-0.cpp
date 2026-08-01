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
        // if(head->next==NULL)
        ListNode* pointer=head;
        ListNode* pointerTemp=NULL;
        while(pointer!=NULL)
        {

            if(pointer->val==val)
            {
                ListNode* temp=NULL;
                if(pointer->next!=NULL)
                {
                    pointer->val=pointer->next->val;
                    temp=pointer->next;
                    pointer->next=pointer->next->next;
                    delete temp;
                    temp=NULL;
                }
                else
                {
                    if(pointerTemp==NULL)
                    {
                        temp=pointer;
                        pointer=NULL;
                        head=NULL;
                        delete temp;
                        temp=NULL;
                    }
                    else
                    {
                        pointerTemp->next=NULL;
                        delete pointer;
                        pointer=NULL;
                    }
                    

                }
            }
            else
            {
                pointerTemp=pointer;
                pointer=pointer->next;
            }
        }

        return head;
        
    }
};