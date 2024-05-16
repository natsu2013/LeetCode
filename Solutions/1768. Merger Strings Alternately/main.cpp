class Solution {
public:
    string mergeAlternately(const string& word1, const string& word2) {
        int n = word1.size(), m = word2.size(), i = 0, j = 0; 
        string ret = "";
        while (i < n || j < m)
        {
            if (i < n) ret += word1[i++];
            if (j < m) ret += word2[j++];
        }
        return ret;
    }
};
