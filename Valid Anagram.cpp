class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> f(26, 0);
        
        for(auto i : s)
            ++f[i - 'a'];
        for(auto i : t)
            --f[i - 'a'];
        
        bool ok = 1;
        for(int i = 0; i < 26; i++)
            ok = ok and (f[i] == 0);
        
        return ok;  
    }
};
