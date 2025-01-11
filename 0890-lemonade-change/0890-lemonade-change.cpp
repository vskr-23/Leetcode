class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0,tens=0;
        
        for(auto it:bills){
            switch(it){
                case 5:
                    fives++;
                    break;
                case 10:if(fives>0){
                    fives--;
                    tens++;
                }
                    else{
                        return false;
                    }
                    break;
                case 20:
                    if(fives>0 && tens>0){
                        fives--;
                        tens--;
                    }
                    else if(fives>=3){
                        fives-=3;
                    }
                    else{
                        return false;
                    }
                    break;
            }
        }
        return true;
    }
};