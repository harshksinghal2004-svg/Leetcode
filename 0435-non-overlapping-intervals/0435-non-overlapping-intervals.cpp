class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int ans=0;
        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i][1]<=intervals[i+1][0])
            continue;
            else{
ans=ans+1;
if(intervals[i][1]<=intervals[i+1][1])
intervals[i+1]=intervals[i];
            }
        }
        return ans ;
        
    }
};