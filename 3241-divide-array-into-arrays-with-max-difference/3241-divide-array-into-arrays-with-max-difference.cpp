class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> ans;
        priority_queue<int> pq;
        for (int num : nums) {
            pq.push(num);
        }
        vector<vector<int>> temp;
        while (pq.size() > 0) {
            int first = pq.top();
            vector<int> subarray;
            for (int i = 0; i < 3; i++) {
                if (first- pq.top()<= k) {
                    subarray.push_back(pq.top());
                    pq.pop();
                } else {
                    return temp;
                }
            }
            ans.push_back(subarray);
        }
        return ans;
    }
};