class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
       int i=1;
        int minimum=nums[0];
        int maximum=nums[0];
       while(i<nums.size()){
        minimum=min(minimum,nums[i]);
        maximum=max(maximum,nums[i]);
        if(maximum-minimum<=k){
            i++;
            continue;
        }
        maximum=nums[i];
        minimum=nums[i];
        cnt++;
        i++;
       }
       return cnt+1;
    }
};