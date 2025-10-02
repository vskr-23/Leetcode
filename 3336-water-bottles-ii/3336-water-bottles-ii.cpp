class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int cnt=0;
        while(numBottles>=numExchange){
            numBottles-=numExchange;
            numBottles++;
            cnt+=numExchange;
            numExchange++;
        }
        cnt+=numBottles;
        return cnt;
    }
};