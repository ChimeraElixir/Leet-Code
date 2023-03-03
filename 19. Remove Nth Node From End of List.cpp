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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        struct ListNode *curr=head;

        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        
        int x=count-n;
        if(count==1){
            head=NULL;
            return head;
        }
        int i=1;
        curr=head;
        while(i!=x){
            i++;
            if(curr->next!=NULL){
                curr=curr->next;
            }
            
            
        }
        if(curr->next->next==NULL){
            curr->next=NULL;
            return head;
        }
        else{
            struct ListNode *nex=curr->next->next;
        curr->next=nex;
        return head;
        }
        
    }
    
};
