class Solution {
public:
    int addDigits(int num) {
       if(num>=0 && num<=9){
        return num;
       } 
       else{
            int sum=0;
            int k=num;
            while(k>0){
                sum+=k%10;
                k/=10;
            }
            return addDigits(sum);
       }
       return -1;
    }
};