class Solution {
public:
    int sumfunction(vector<int>&nums){
        int sum=0;
        for(auto it:nums){
            sum=sum^it;
        }
        return sum;
    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<(1<<n);i++){
            vector<int>sub;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    sub.push_back(nums[j]);
                }
            }
            ans+=sumfunction(sub);
        }
        return ans;
    }
};