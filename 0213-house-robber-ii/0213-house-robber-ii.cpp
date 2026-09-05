class Solution {
public:
    long long fxn(vector<int>& temp) {
        long long prev1 = temp[0];
        long long  prev2 =0;
         for (int i = 1; i < temp.size(); i++) {
            long long take = temp[i] + prev2;
            long long not_take = prev1;
            long long curi = max(take, not_take);
            prev2 = prev1;
            prev1 = curi;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        vector<int> temp1, temp2;
        int n = nums.size();
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n; i++) {
            if (i != 0)
                temp1.push_back(nums[i]);
            if (i != (n - 1))
                temp2.push_back(nums[i]);
            
        }
        return max(fxn(temp1), fxn(temp2));
    }
};