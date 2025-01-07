class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(auto it:words){
            for(auto jt:words){
                if(it==jt){
                    continue;
                }
                if(jt.find(it)!=string::npos){
                    ans.push_back(it);
                    break;
                }
            }
        }
        return ans;
    }
};