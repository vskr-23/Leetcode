class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto it:moves){
            switch(it){
                case 'R':
                    x++;
                    break;
                case 'L':
                    x--;
                    break;
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
            }
        }
        if(x==0 && y==0){
            return true;
        }
        return false;
    }
};