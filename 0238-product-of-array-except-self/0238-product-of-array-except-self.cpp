class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        long long product=1;
        vector<int>ans(n);
        int count=0;
        int index;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                index=i;
                count++;
                if(count==2){
                    break;
                }
            }else{
                product*=nums[i];
            }
        }
        if(count==2){
            return ans;
        }
        if(count==1){
            ans[index]=product;
            return ans;
        }
        for(int i=0;i<n;i++){
            ans[i]=product/nums[i];
        }
        return ans;
    }
};