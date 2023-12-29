class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
       int n = jobDifficulty.size();
        
        const int inf = 1e5;
        
        vector<vector<int>> dp(n + 1, vector<int> (d + 1, inf));
        dp[n][d] = 0;
        
        for(int i = n - 1; i > -1; i--){
            for(int j = 0; j < d; j++){
                int MAX = 0;
                
                for(int k = i; k < n; k++){
                    MAX = max(MAX, jobDifficulty[k]);
                    
                    dp[i][j] = min(dp[i][j], MAX + dp[k + 1][j + 1]);
                }
            }
        }
        
        return dp[0][0] >= inf ? -1 : dp[0][0];   
    }
};
