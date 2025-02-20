class Solution {
public:
    void f(int ind,int n, int target,vector<int>&ds,vector<int>&candidates,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(ind==n || target<0){
            return;
        }
        ds.push_back(candidates[ind]);
        f(ind,n,target-candidates[ind],ds,candidates,ans);
        ds.pop_back();
        f(ind+1,n,target,ds,candidates,ans);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=candidates.size();
        f(0,n,target,ds,candidates,ans);
        return ans;
    }
};