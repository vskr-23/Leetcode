class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l=INT_MIN;
        int sl=INT_MIN;
        for(auto it:nums){
            if(it>l){
                sl=l;
                l=it;
            }else if(it>sl){
                sl=it;
            }
        }
        return (sl-1)*(l-1);
    }
};