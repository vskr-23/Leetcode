class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=1;i<=nums.size();i++){
            if(seen.find(i)==seen.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};