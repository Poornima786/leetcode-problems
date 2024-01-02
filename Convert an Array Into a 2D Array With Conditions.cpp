class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> mp;
        for (auto x : nums){
            mp[x]++;
        }
        
        int row_size = INT_MIN;
        for (auto it : mp){
            if (it.second > row_size){
                row_size = it.second;
            }
        }
        
        vector<pair<int, int>> v;
        for (auto it : mp){
            v.push_back({it.second, it.first});
        }
        
        sort(v.begin(), v.end());
        
        vector<vector<int>> ans(row_size);
        for (int i=0 ; i<v.size() ; i++){
            int count = v[i].first;
            int num = v[i].second;
            int j = 0;
            while (j < row_size and count--){
                ans[j].push_back(num);
                j++;
            }
        }
        
        return ans;
    }
};
