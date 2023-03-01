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
        
        if(head==NULL || head->next==NULL){
            return 0;
        }
        while(head->next!=NULL){
            if(maps[head->next]){
                return 1;
            }
            maps[head->next]=i;
            i++;
            head=head->next;
        }
        return 0;

    }
};
