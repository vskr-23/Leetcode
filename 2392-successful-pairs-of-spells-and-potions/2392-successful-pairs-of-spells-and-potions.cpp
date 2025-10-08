class Solution {
public:
    int binarysearch(vector<int>&potions,long long success,int t){
        int low=0;
        int idx=potions.size();
        int high=idx-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((long long)t*potions[mid]>=success){
                idx=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return idx;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(),potions.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int index=binarysearch(potions,success,spells[i]);
            ans[i]=m-index;
        }

        return ans;
    }
};