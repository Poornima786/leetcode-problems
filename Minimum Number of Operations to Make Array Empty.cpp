class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        
        unordered_map<int,int> f;
        
        for(auto i : nums)
            ++f[i];
        
        for(auto i : f){
            if(i.second % 3 == 0){
                ans += i.second / 3;
            }
            else if(i.second % 3 == 2){
                ++ans;
                ans += (i.second - 2) / 3;
            }
            else{
                if(i.second == 1)
                    return -1;
                
                ans += 2;
                ans += (i.second - 4) / 3;
            }
        }
        
        return ans;
    }
};
