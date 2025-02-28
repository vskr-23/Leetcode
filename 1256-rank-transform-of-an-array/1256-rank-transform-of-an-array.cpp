class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>rank;
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int r=1;
        for(auto it:temp){
            if(rank.find(it)==rank.end()){
                rank[it]=r;
                r++;
            }
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(rank[arr[i]]);
        }
        return ans;
    }
};