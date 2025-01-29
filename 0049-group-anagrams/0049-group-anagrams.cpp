class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>temporary=strs;
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<temporary.size();i++){
            sort(temporary[i].begin(),temporary[i].end());
            mpp[temporary[i]].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};