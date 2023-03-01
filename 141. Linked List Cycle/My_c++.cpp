/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map <struct ListNode *,int > maps;
        int i=0;
        struct ListNode *temp=head;
        if(temp==NULL || temp->next==NULL){
            return 0;
        }
        while(temp->next!=NULL){
            if(maps[temp->next]){
                return 1;
            }
            maps[temp->next]=i;
            i++;
            temp=temp->next;
        }
        return 0;

    }
};
