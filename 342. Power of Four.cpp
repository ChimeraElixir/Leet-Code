class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        x=n
        count=0
        if(n>0):
            while x>1:
                x>>=2
                count+=1
            if(x<<(2*count)==n):
                return 1
        return 0
