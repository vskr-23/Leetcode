class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minimum=prices[0];
        int maximum=0;
        for(int i=1;i<n;i++){
            if(prices[i]<minimum){
                minimum=prices[i];
            }else{
                maximum=max(maximum,prices[i]-minimum);
            }
        }
        return maximum;
    }
};