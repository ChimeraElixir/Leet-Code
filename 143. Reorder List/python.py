# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        l=[]
        temp=head
        while temp:
            l.append(temp)
            temp=temp.next
        temp=ListNode()
        h,lo=len(l)-1,0
        for i in range(len(l)):
            if i%2==0:
                temp.next=l[lo]
                temp=temp.next
                lo+=1
            else:
                temp.next=l[h]
                temp=temp.next
                h-=1

        temp.next=None
        head=temp.next   
        
