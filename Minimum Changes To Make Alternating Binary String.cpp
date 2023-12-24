class Solution {
public:
    int minOperations(string s) {
        int expect = 0;
        int ans1 = 0;
        
        for(auto i : s){
            ans1 += expect != (i - '0');
            
            expect ^= 1;
        }
        
      
        
        expect = 1;
        int ans2 = 0;
        
        for(auto i : s){
            ans2 += expect != (i - '0');
            
            expect ^= 1;
        }
        
        return min(ans1, ans2);
    }
};
