class Solution {
public:
    vector<int>tri=vector<int>(38,-1);
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2 ) return 1;
        if(tri[n]!=-1) return tri[n];
        return tri[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};