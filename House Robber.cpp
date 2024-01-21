class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int dp[n + 1][2];
        dp[n][0] = dp[n][1] = 0;

        for(int i = n - 1; i > -1; i--){
            for(int j = 0; j < 2; j++){
                int take = 0, notake = 0;

                if(j == 0)
                    take = nums[i] + dp[i + 1][1];
                
                notake = dp[i + 1][0];

                dp[i][j] = max(take, notake);
            }
        }

        return dp[0][0];
    }
};
