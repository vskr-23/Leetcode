class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int maximum=0;
        for(auto num:nums){
            mpp[num]++;
            maximum=max(maximum,mpp[num]);
        }
        int ans=0;
        for(auto it:mpp){
            if(it.second==maximum){
                ans+=maximum;
            }
        }
        return ans;

    }
};