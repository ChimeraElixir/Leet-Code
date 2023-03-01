# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        map={}
        i=0
        temp=head
        if(temp==None  or temp.next==None):
            return 0
        while(temp):
            if(temp.next in map):
                return 1
            map[temp.next]=i
            temp=temp.next
            i+=1
        return 0
        
