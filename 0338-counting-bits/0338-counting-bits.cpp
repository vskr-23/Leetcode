class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            int k=i;
            int cnt=0;
            while(k>0){
                k=k&(k-1);
                cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};