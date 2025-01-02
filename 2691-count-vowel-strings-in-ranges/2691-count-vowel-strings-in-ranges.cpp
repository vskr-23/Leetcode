class Solution {
public:
    bool isVowel(char c) {
    char lower = tolower(c);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
       vector<int>ans(queries.size());
       int n=words.size();
       vector<int>prefix_sum(n+1,0);
       for(int i=0;i<n;i++){
        int len=words[i].length();
        if(isVowel(words[i][0]) && isVowel(words[i][len-1])){
            prefix_sum[i+1]=prefix_sum[i]+1;
        }else{
            prefix_sum[i+1]=prefix_sum[i];
        }
       }
       for(int i=0;i<queries.size();i++){
        int start=queries[i][0];
        int end=queries[i][1];
        ans[i]=prefix_sum[end+1]-prefix_sum[start];
       }
        return ans;
    }
};