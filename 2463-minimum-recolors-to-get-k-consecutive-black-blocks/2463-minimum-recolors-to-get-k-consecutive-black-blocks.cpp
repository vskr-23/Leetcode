class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.length();
        int minimum=INT_MAX;
        for(int i=0;i<=n-k;i++){
            string sub=blocks.substr(i,k);
            int white=0;
            for(auto ch:sub){
                if(ch=='W'){
                    white++;
                }
            }
            minimum=min(minimum,white);
        }
        return minimum;
    }
};