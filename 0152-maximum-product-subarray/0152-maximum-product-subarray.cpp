class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=*max_element(nums.begin(),nums.end());
        int maximum=1;
        int minimum=1;
        for(auto num:nums){
            int temp=maximum*num;
            maximum=max({temp,minimum*num,num});
            minimum=min({temp,minimum*num,num});
            res=max(res,maximum);
        }
        return res;
    }
};