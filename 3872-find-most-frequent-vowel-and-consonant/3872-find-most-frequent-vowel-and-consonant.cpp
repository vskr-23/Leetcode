class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mpp;
        for(auto c:s){
            mpp[c]++;
        }
        int maxvowel=0;
        int maxconsonant=0;
        for(auto it:mpp){
            char c=it.first;
            if(string("aeiou").find(c)!=string::npos){
                maxvowel=max(maxvowel,mpp[c]);
            }else{
                maxconsonant=max(maxconsonant,mpp[c]);
            }
        }
        return maxvowel+maxconsonant;
    }
};