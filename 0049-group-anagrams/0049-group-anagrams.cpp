class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>copy=strs;
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<copy.size();i++){
            sort(copy[i].begin(),copy[i].end());
            mpp[copy[i]].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:mpp){
            vector<string>sub;
            for(auto str:it.second){
                sub.push_back(str);
            }
            ans.push_back(sub);
        }
        return ans;
    }
};