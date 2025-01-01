class Solution {
public:
    int maxScore(string s) {
        int max_score=0;
        int n=s.length();
        for(int i=1;i<n;i++){
            string a=s.substr(0,i);
            string b=s.substr(i,n-i);
            int zeros=0;
            int ones=0;
            for(auto it:a){
                if(it=='0'){
                    zeros++;
                }
            }
            for(auto it:b){
                if(it=='1'){
                    ones++;
                }
            }
            max_score=max(max_score,zeros+ones);
        }
        return max_score;
    }
};