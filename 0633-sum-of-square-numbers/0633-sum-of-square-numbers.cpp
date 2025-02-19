class Solution {
public:
    bool judgeSquareSum(int c) {
        int right=sqrt(c);
        int left=0;
        while(left<=right){
            long long leftsum=(long long)left*left;
            long long rightsum=(long long)right*right;
            long long sum=(long long)leftsum+rightsum;
            if(leftsum==c || rightsum==c || sum==c){
                return true;
            }else if(sum>c){
                right--;
            }else{
                left++;
            }

        }
        return false;
        
        
    }
};