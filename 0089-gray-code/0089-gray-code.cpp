class Solution {
public:
    vector<int> grayCode(int n) {
        int size=pow(2,n);
        vector<int>gc(size);
        for(int i=0;i<size;i++){
            gc[i]=i^(i>>1);
        }
        return gc;
    }
};