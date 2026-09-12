class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        if(n==0)
        return 0;
        int maxi = 1;
        int cnt = 1;
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1] + 1)
                cnt++;
            else if (nums[i] == nums[i - 1])
                continue;
            else {
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }
         maxi = max(maxi, cnt);
        return maxi;
    }
};