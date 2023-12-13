class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       int n = mat.size();
        int m = mat[0].size();
        
        vector<int> row(n, 0), col(m, 0);
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j]){
                    ++row[i];
                    ++col[j];
                }
            }
        }
        
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans += (mat[i][j] and row[i] == 1 and col[j] == 1);
            }
        }
        
        return ans;  
    }
};
