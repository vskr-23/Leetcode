class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
       int n=nums.size();
       vector<long long>prefix_sum(n+1,0);
       for(int i=1;i<n+1;i++){
        prefix_sum[i]=prefix_sum[i-1]+nums[i-1];
       } 
       int cnt=0;
       for(int i=1;i<n;i++){
        long long left=prefix_sum[i];
        long long right=prefix_sum[n]-prefix_sum[i];
        if(left>=right){
            cnt++;
        }
       }
       return cnt;
    }
};