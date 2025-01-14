class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            unordered_map<int,int>mpp;
            for(int j=0;j<=i;j++){
                mpp[A[j]]++;
                mpp[B[j]]++;
            }
            int cnt=0;
            for(auto it:mpp){
                if(it.second>=2){
                    cnt++;
                }
            }
            ans[i]=cnt;
        }
        return ans;
    }
};