class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        vector<string>v1;
        vector<string>v2;
        stringstream ss1(s1);
        string word1;
        while(ss1>>word1){
            v1.push_back(word1);
        }
        stringstream ss2(s2);
        string word2;
        while(ss2>>word2){
            v2.push_back(word2);
        }
        for(auto str:v2){
            if(count(v2.begin(),v2.end(),str)==1 && !count(v1.begin(),v1.end(),str)){
                ans.push_back(str);
            }
        }
        for(auto str:v1){
            if(count(v1.begin(),v1.end(),str)==1 && !count(v2.begin(),v2.end(),str)){
                ans.push_back(str);
            }
        }
        return ans;
    }

};