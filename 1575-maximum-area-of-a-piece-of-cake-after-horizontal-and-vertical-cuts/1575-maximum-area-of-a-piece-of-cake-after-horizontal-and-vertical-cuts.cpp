class Solution {
public:
    const int MOD=1e9+7;
    long long maxgap(int high,vector<int>cuts){
        sort(cuts.begin(),cuts.end());
        long long maxgap=cuts[0];
        int n=cuts.size();
        for(int i=1;i<n;i++){
            maxgap=max(maxgap,(long long)cuts[i]-cuts[i-1]);
        }
        maxgap=max(maxgap,(long long)high-cuts[n-1]);
        return maxgap;

    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long maxhgap=maxgap(h,horizontalCuts);
        long long maxwgap=maxgap(w,verticalCuts);
        return (maxhgap*maxwgap)%MOD;
    }
};