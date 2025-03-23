class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int>mpp;
        for(auto num:nums){
            mpp[num]++;
        }
        int cnt=0;
        for(auto it:mpp){
            if(it.second%2==0){
                cnt+=it.second/2;
            }
        }
        return cnt==n;
        
    }
};