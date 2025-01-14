class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest_sum=INT_MAX/2;
        for(int i=0;i<n-2;i++){
            int start=i+1;
            int end=n-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(abs(sum-target)<abs(closest_sum-target)){
                    closest_sum=sum;
                }
                if(sum<target){
                    start++;
                }else if(sum>target){
                    end--;
                }else{
                    return sum;
                }
            }
        }
        return closest_sum;
    }
};