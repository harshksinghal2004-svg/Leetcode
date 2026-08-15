class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xoro=0;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            xoro=xoro^nums[i];
            if(nums[i]==0)
            zero++;
        }

        if(zero==nums.size())
        return 0;
        if(xoro!=0)
        return nums.size();
        else
        return nums.size()-1;
    }
};