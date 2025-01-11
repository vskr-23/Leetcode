class Solution {
public:
    double average(vector<int>& salary) {
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        long long sum=0;
        int n=salary.size();
        for(int i=0;i<n;i++){
            maximum=max(maximum,salary[i]);
            minimum=min(minimum,salary[i]);
            sum+=salary[i];
        }
        double ans=(sum-minimum-maximum)/static_cast<double>(n-2);
        return ans;
    }
};