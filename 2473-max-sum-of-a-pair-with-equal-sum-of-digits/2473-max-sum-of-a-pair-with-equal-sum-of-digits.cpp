class Solution {
public:
    int sumOfDigits(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[sumOfDigits(nums[i])].push_back(nums[i]);
        }
        int maxsum=-1;
        for(auto it:mpp){
            if(it.second.size()<2) continue;
            sort(it.second.begin(),it.second.end());
            int x=it.second.back();
            int y=it.second[it.second.size()-2];
            maxsum=max(maxsum,x+y);
        }
        return maxsum;
    }
};