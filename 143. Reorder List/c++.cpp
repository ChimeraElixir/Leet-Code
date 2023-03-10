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
    void reorderList(ListNode* head) {
        ListNode *today=head;
        vector<ListNode *> v;
        while(today){
            v.push_back(today);
            today=today->next;
        }
        ListNode *temp =new ListNode();
        ListNode *ans=temp;
        
        int n=v.size();
        int h=n-1,l=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                temp->next=v[l];
                temp=temp->next;
                l+=1;
                
            }
            else{
                temp->next=v[h];
                temp=temp->next;
                h-=1;
            }
        }
        temp->next=NULL;
        head=ans->next;
        
        /*ListNode *dummy=new ListNode();
        int n=v.size();
        for(int i=0;i<n;i++){
            if(i%2==1){
                dummy->next=v[i];
                dummy=dummy->next;
            }
            else{
                dummy->next=v[n-i];
                dummy=dummy->next;
            }
        }*/
        
    }
};
