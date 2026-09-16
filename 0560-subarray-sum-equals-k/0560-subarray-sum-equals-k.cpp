class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix_sum(n);
        int sum = 0;
        int cnt = 0;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
            prefix_sum[i] = sum;
        }
        mpp[0]=1;
        for (int i = 0; i < n; i++) {
            int remove = prefix_sum[i] - k;
            if (mpp.find(remove) != mpp.end()) {
                cnt = cnt + mpp[remove];
            }
            mpp[prefix_sum[i]]++;
        }
        return cnt;
    }
};