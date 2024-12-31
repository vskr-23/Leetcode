class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int max_area=0;
        while(left<right){
            int lower=height[left]<=height[right]?left:right;
            int area=(right-left)*height[lower];
            max_area=max(max_area,area);
            if(lower==left){
                left++;
            }
            else{
                right--;
            }
        }
        return max_area;
    }
};