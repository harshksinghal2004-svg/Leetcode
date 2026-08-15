class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>freq1(256,-1);
        vector<int>freq2(256,-1);
        int n=s.size();
        int m=t.size();
        if(n!=m)
        return false;

        for(int i=0;i<n;i++){
            if(freq1[s[i]]!=freq2[t[i]])
            return false;

            freq1[s[i]]=freq2[t[i]]=i;

        }
        return true;
    }
};