class Solution {
public:
    void f(int ind,int k,int target,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums){
            if(ds.size()==k ){
                if(target==0){
                    ans.push_back(ds);
                }
                return;
            }
        for(int i=ind;i<9;i++){
            if(nums[i]>target) break;
            ds.push_back(nums[i]);
            f(i+1,k,target-nums[i],ds,ans,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums(9);
        for(int i=0;i<9;i++){
            nums[i]=i+1;
        }
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,k,n,ds,ans,nums);
        return ans;
    }
};