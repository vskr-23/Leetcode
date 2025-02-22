class CustomStack {
public:
    vector<int>nums;
    int size;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(nums.size()<size) nums.push_back(x);
    }
    
    int pop() {
        if(!nums.empty()){
            int k=nums.back();
            nums.pop_back();
            return k;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k && i<nums.size();i++){
            nums[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */