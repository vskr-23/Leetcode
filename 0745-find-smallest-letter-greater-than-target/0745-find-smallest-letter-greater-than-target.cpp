class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int middle=low+(high-low)/2;
            if(letters[middle]<=target){
                low=middle+1;
            }else {
                high=middle-1;
            }
        }
        return letters[low%n];
    }
};