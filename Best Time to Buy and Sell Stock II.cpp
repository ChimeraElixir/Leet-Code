class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_=0;
        if(n<2){
            return 0;
        }
        int left=0,right=1;
        
    
        while(right!=n){
            if(prices[right]<prices[left]){
                left=right;
            }
            else{
                max_=max(max_,(prices[right])-(prices[left]));
            }
            
            right++;
        }
        return max_
    }
};
