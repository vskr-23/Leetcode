class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int bulls=0;
        unordered_map<int,int>secret_map;
        unordered_map<int,int>guess_map;
        vector<int>guess_vector;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
            else{
               secret_map[secret[i]]++;
               guess_map[guess[i]]++;
            }
        }
        int cows=0;
        for(auto it:secret_map){
            char ch=it.first;
            if(guess_map.find(ch)!=guess_map.end()){
                cows+=min(it.second,guess_map[it.first]);
            }
        }
        return to_string(bulls)+'A'+to_string(cows)+'B';
    }
};