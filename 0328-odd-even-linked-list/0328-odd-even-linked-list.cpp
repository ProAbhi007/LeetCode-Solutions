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
        if (!head || !head->next) return head;
       int x=1;
       ListNode *es=NULL,*ee=NULL,*os=NULL,*oe=NULL;
       for(ListNode *curr=head;curr!=NULL;curr=curr->next){
       
        if(x%2==0){
            if(es==NULL){
                es=ee=curr;
            }
            else{
                ee->next=curr;
                ee=ee->next;
            }
        }
        else{
            if(os==NULL){
                os=oe=curr;
            }
            else{
                oe->next=curr;
                oe=oe->next;
            }
        }
        x++;

       }
       oe->next=es;
       ee->next=NULL;
       return head;

    }
};