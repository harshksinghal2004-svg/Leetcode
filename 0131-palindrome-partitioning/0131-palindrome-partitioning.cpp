class Solution {
public:
    void rec(string s, vector<vector<string>>& answer, vector<string> substring,
             int index) {
        if (index == s.size()) {
            answer.push_back(substring);
            return;
        }
        for (int i = index;i<s.size();i++ ){
            if(ispalindromic(s,index,i)){
                substring.push_back(s.substr(index,i-index+1));
                rec(s,answer,substring,i+1);
                 substring.pop_back();

            }
        }
            ;
        return;
    }

    bool ispalindromic(string s, int start, int end) {
        while (start <= end) {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        vector<string> substring;
        rec(s, answer, substring, 0);
        return answer;
    }
};