class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        unordered_map<int,long long>mpp;
        for(int pow : power) mpp[pow]+=pow;
        vector<int>nums;
        for(auto &it : mpp) nums.push_back(it.first);
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<long long>dp(n,0);
        dp[0]=mpp[nums[0]];
        for (int i = 1; i < n; i++) {
            long long take = mpp[nums[i]];
            int j = i - 1;
            while (j >= 0 && nums[i] - nums[j] <= 2)
                j--;

            if (j >= 0)
                take += dp[j];

            dp[i] = max(dp[i-1], take);
        }
        return dp[n-1];
    }
};