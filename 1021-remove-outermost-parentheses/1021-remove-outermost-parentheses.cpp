class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int open = 0;
        int close = 0;
        string a = "";
       int start = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                open++;
            else
                close++;

            if (open == close) {
             a=a+(s.substr(start+1, i-start-1 ));
                start = i+1;
                open=0;
                close=0;
            }
        }
        return a;
    }
};