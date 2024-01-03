class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int next = 0;
        
        for(int i = bank.size() - 1; i > -1; i--){
            int to_be_next = 0;
            
            for(auto j : bank[i]){
                if(j == '1'){
                    ++to_be_next;
                    ans += next;
                }
            }
            
            next = to_be_next > 0 ? to_be_next : next;
        }
        
        return ans;
    }
};
