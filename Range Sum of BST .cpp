class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        
        function<void(TreeNode *)> traverse = [&](TreeNode * node) {
            if(!node)
                return;
            
            if(node -> val >= low and node -> val <= high){
                ans += node -> val;
                traverse(node -> left);
                traverse(node -> right);
            }
            else if(node -> val < low){
                traverse(node -> right);
            }
            else if(node -> val > high){
                traverse(node -> left);
            }
        };   
        
        traverse(root);
        
        return ans;
    }
};
