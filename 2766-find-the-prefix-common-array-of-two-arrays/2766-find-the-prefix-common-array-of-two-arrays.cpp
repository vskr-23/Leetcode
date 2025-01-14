class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans(n,0);
        unordered_set<int>seenA,seenB;
        int commonElements=0;
        for(int i=0;i<n;i++){
           if(seenB.count(A[i])){
            commonElements++;
           }
           seenA.insert(A[i]);
           if(seenA.count(B[i])){
            commonElements++;
           }
           seenB.insert(B[i]);
           ans[i]=commonElements;
        }
        return ans;
    }
};