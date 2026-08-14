class Solution {
public:
    vector<vector<int>> rec(int k, int n, int number,
                            vector<vector<int>> &ans,
                            vector<int> &subset) {

        if (n == 0 && k == 0) {
            ans.push_back(subset);
            return ans;
        }

        if (k > 0 && number <= 9) {

            subset.push_back(number);

            rec(k - 1, n - number, number + 1, ans, subset);

            subset.pop_back();

            rec(k, n, number + 1, ans, subset);
        }

        return ans;
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> subset;
        vector<vector<int>> ans;

        ans = rec(k, n, 1, ans, subset);

        return ans;
    }
};