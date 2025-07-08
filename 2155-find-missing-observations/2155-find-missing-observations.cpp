class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=0;
        for(auto roll:rolls){
            sum+=roll;
        }
        int remaining_sum=(m+n)*mean-sum;
        if(remaining_sum>6*n || remaining_sum<n){
            return {};
        }
        int mod=remaining_sum%n;
        vector<int>ans(n,remaining_sum/n);
        for(int i=0;i<mod;i++){
            ans[i]++;
        }
        return ans;
    }
};