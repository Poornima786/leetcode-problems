class Solution {
public:
    bool makeEqual(vector<string>& words) {
          vector<int> f(26, 0);
        
        for(auto i : words){
            for(auto j : i)
                ++f[j - 'a'];
        }
        
        bool ok = 1;
        
        for(int i = 0; i < 26; i++)
            ok = ok and !(f[i] % words.size());
        
        return ok;
    }
};
