class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //    vector<int> ans(nums1.size(), -1);
        //     for (int i = 0; i < nums1.size(); i++) {
        //         for (int j = 0; j < nums2.size(); j++) {
        //             if (nums1[i] == nums2[j]) {
        //                 for (int k = j + 1; k < nums2.size(); k++) {
        //                     if (nums2[k] > nums1[i]) {
        //                         ans[i] = nums2[k];
        //                         break;
        //                     }
        //                 }
        //             }
        //         }
        //     }
        //     return ans ;
        unordered_map<int,int>mp;
        stack<int> st;
        int n = nums2.size();
        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (st.empty()) {
                mp[nums2[i]] = -1;

            } else
                  mp[nums2[i]] = st.top();

                st.push(nums2[i]);
        }
          vector<int> ans;

        for (int x : nums1) {
            ans.push_back(mp[x]);
        }

        return ans;
        
    }
};