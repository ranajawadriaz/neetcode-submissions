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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* head1Temp=NULL;

        while(head1!=NULL&&head2!=NULL)
        {
            if(head1->val>head2->val)
            {
                int temp=head1->val;
                head1->val=head2->val;
                head2->val=temp;
                ListNode* head2Temp=head2->next;
                head2->next=head1->next;
                head1->next=head2;
                head2=head2Temp;


                head1Temp=head1;
                head1=head1->next;


            }
            else
            {
                head1Temp=head1;
                head1=head1->next;
                // ListNode* temp=head1->next;
                // head


            }



        }

        // if(head1!=NULL)
        // {

        // }
        if(head2!=NULL)
        {
            if(head1Temp==NULL)
            {
                head1=head2;
                list1=head2;
            }
            else
            {
                head1Temp->next=head2;

            }
            

        }

        // if(head1!=NULL&&head1Temp==NULL&&head2!=NULL)
        // {
        //     head1=head2;

        // }


        return list1;

        
    }
};
