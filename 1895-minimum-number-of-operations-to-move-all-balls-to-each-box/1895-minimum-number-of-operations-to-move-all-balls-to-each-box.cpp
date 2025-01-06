class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int>ans(n,0);
        vector<int>ones;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                ones.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            for(auto it:ones){
                if(it==i){
                    continue;
                }
                ans[i]+=abs(it-i);
            }
        }
        return ans;
    }
};