class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      vector<int> f(26, 0);
        
        for(auto i : chars)
            ++f[i - 'a'];
        
        int ans = 0;
        
        for(auto i : words){
            bool ok = 1;
            vector<int> left = f;
            
            for(auto j : i){
                if(!left[j - 'a']){
                    ok = 0;
                    break;
                }    
                
                --left[j - 'a'];
            }
            
            ans += ok ? i.size() : 0;
        }
        
        return ans;    
    }
};
