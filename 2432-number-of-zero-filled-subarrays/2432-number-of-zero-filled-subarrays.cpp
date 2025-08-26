class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long hei=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                hei++;
            }else{
                hei=0;
            }
            ans+=hei;
        }
        return ans;
    }
};