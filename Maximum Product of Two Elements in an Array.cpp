
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first, second;
        first = second = 0;

        for(auto i : nums){
            if(i > first){
                second = first;
                first = i;
            }
            else if(i > second){
                second = i;
            }
        }

        return (first - 1) * (second - 1);
    }
