class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maximum_area=0;
        while(left<right){
            int minimum=min(height[left],height[right]);
            maximum_area=max(maximum_area,minimum*(right-left));
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maximum_area;
    }
};