class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign=1;
        for(auto it:nums){
            if(it<0){
                sign*=-1;
            }
            else if(it==0){
                sign=0;
                break;
            }
        }
        return sign;

    }
};