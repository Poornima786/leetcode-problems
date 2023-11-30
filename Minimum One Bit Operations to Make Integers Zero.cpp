class Solution {
public:
    int minimumOneBitOperations(int n) {
      int ans = 0;
        bool one = 0;
        
        for(int i = 31; i > -1; i--){
            if((n >> i) & 1){
                if(!one){
                    ans += 1 << i;
                    one = 1;
                }
                else{
                    one = 0;
                }
            }
            else{
                if(one){
                    ans += 1 << i;
                }
            }
        }
        
        return ans;    
    }
};
