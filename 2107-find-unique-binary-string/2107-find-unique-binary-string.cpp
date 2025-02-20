class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums[0].length();
        unordered_set<int>numbers;
        for(auto num:nums){
            numbers.insert(stoi(num,nullptr,2));
        }
        for(int i=0;i<(1<<n);i++){
            if(numbers.find(i)==numbers.end()){
                bitset<32>binary(i);
                return binary.to_string().substr(32-n);
            }
        }
        return "";
    }
};