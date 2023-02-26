class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left,right=0,len(height)-1
        max_=0

        while(right!=left):
            max_=max(max_,(min(height[right],height[left])*abs(right-left)))
            if(height[right]>=height[left]):
                left+=1
            elif(height[left]>height[right]):
                right-=1
            
            
        return max_
