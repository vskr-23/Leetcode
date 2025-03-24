class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>>merged;
        for(auto meeting:meetings){
            if(merged.empty() || merged.back()[1]<meeting[0]){
                merged.push_back(meeting);
            }else if(merged.back()[1]>=meeting[0]){
                merged.back()[1]=max(meeting[1],merged.back()[1]);
            }
        }
        int cnt=0;
        for(auto meeting:merged){
            int start=meeting[0];
            int end=meeting[1];
            for(int i=start;i<=end;i++){
                cnt++;
            }
        }
        return days-cnt;
    }
};