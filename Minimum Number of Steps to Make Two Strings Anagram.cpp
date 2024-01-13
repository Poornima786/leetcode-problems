class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> f(26, 0);
        
        for(auto i : s)
            ++f[i - 'a'];
        for(auto i : t)
            --f[i - 'a'];
        
        int ans = 0;
        
        for(int i = 0; i < 26; i++){
            ans += f[i] < 0 ? -f[i] : 0;
        }
        
        return ans;
    }
};
