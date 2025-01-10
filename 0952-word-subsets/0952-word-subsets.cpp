class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int maxCharFreq[26]={0};
        for(auto word:words2){
            vector<int>tempCharFreq(26,0);
            for(char ch:word){
                tempCharFreq[ch-'a']++;
            }
            for(int i=0;i<26;i++){
                maxCharFreq[i]=max(maxCharFreq[i],tempCharFreq[i]);
            }
        }
        vector<string>UniversalWords;
        for(auto word:words1){
            vector<int>tempCharFreq(26,0);
            for(char ch:word){
                tempCharFreq[ch-'a']++;
            }
            bool isUniversal=true;
            for(int i=0;i<26;i++){
                if(maxCharFreq[i]>tempCharFreq[i]){
                    isUniversal=false;
                    break;
                }  
            }
            if(isUniversal){
                    UniversalWords.push_back(word);
                }
        }
        return UniversalWords;
    }
};