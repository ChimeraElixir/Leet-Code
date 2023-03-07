# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow,fast=head,head

        while(fast!=None and fast.next!=None):
            slow=slow.next
            fast=fast.next.next

            if(slow==fast):
                return 1
        return 0
        
