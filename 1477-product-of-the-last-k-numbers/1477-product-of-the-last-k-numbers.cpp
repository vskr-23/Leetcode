class ProductOfNumbers {
public:
    int cnt=0;
    vector<int>stream;
    ProductOfNumbers() {  
    }
    void add(int num) {
        stream.push_back(num);
    }
    
    int getProduct(int k) {
        int i=stream.size()-1;
        int product=1;
        while(k--){
            product*=stream[i];
            i--;
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */