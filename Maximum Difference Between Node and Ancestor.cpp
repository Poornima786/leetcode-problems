class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        const int inf = 1e6;
        
        function<pair<int,int>(TreeNode *)> dfs = [&](TreeNode * node) -> pair<int,int> {
            if(!node)
                return {inf, -inf};
            
            pair<int,int> left = dfs(node -> left);
            pair<int,int> right = dfs(node -> right);
            
            int MIN = min(left.first, right.first);
            int MAX = max(left.second, right.second);
            
            if(node -> left or node -> right)
                ans = max({ans, abs(MIN - node -> val), abs(MAX - node -> val)});
            
            return {min(MIN, node -> val), max(MAX, node -> val)};
        };
        
        dfs(root);
        
        return ans;
    }
};
