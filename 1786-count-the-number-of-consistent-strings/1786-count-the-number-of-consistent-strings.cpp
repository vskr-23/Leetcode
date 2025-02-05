class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<char>v;
        for(auto letter:allowed){
            v.push_back(letter);
        }
        int cnt=0;
        for(auto word:words){
            bool flag=true;
            for(auto letter:word){
                if(find(v.begin(),v.end(),letter)==v.end()){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cnt++;
            }
        }
        return cnt;
    }
};