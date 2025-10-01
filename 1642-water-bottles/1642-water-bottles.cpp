class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt=0;
        while(numBottles>=numExchange){
            numBottles-=numExchange;
            cnt+=numExchange;
            numBottles++;
        }
        cnt+=numBottles;
        return cnt;
    }
};