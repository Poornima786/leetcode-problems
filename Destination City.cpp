class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
         map<string, int> ans;
        
        for(auto i : paths)
            ans[i[1]] = 1;
        
        for(auto i : paths)
            ans.erase(i[0]);
        
        return (*ans.begin()).first;
    }
};
