class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        map<int, int> f;
        long long ans = 0;
        const long long mod = 1e9 + 7;
        
        for(auto i : nums){
            string rev = to_string(i);
            reverse(rev.begin(), rev.end());
            int j = stoi(rev);
            
            ans = (ans + f[i - j]) % mod;
            ++f[i - j];
        }
        
        return ans;  
    }
};
