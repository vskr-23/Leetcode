class Solution {
public:
    int average(vector<int>&ans){
        int n=ans.size();
        int sum=0;
        for(auto it:ans){
            sum+=it;
        }
        return sum/n;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>>final;
        for(int i=0;i<m;i++){
            vector<int>answer;
            for(int j=0;j<n;j++){
                int sum=0;
                int count=0;
                for(int k=-1;k<2;k++){
                    for(int l=-1;l<2;l++){
                        if(i+k>=0 && j+l>=0 && i+k<m && j+l<n){
                            sum+=img[i+k][j+l];
                            count++;
                        }
                    }
                }
            answer.push_back(sum/count);
            }
            final.push_back(answer);
        }
        return final;
    }
};