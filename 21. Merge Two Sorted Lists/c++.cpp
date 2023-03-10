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
        ListNode * ptr= new ListNode();
        ListNode * ptr2=ptr;

        
        while(list1!=NULL && list2!=NULL){
            if(list1->val>=list2->val){
                ptr->next= new ListNode(list2->val);
                ptr=ptr->next;
                list2=list2->next;
            }
            else {
                ptr->next=new ListNode(list1->val);
                ptr=ptr->next;
                list1=list1->next;
            }
        }
        if(!list1)
            ptr -> next = list2;
        else
            ptr -> next = list1;
        return ptr2->next;
    }
};
