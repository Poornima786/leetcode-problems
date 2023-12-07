class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        vector<char> odd = {'1', '3', '5', '7', '9'};
        
        string cur = "";
        
        for(auto i : num){
            cur += i;
            
            if(binary_search(odd.begin(), odd.end(), i))
                ans = cur;
        }
        
        return ans;   
    }
};
