class Solution {
public:
    const int MOD=1e9+7;
    long long power(long long x,long long n,int MOD){
        long long ans=1;
        while(n>0){
            if(n&1){
                n--;
                ans=(ans*x)%MOD;
            }
            else{
                x=(x*x)%MOD;
                n>>=1;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long countfives=(n+1)/2;
        long long countfours=n/2;
        long long ans=(power(5,countfives,MOD)*power(4,countfours,MOD))%MOD;
        return (int)ans;
    }
};