class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int need = n / 4;
        int count = 1;
        
        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i - 1]){
                if(count > need)
                    return arr[i - 1];

                count = 1;
            }
            else{
                ++count;
            }
        }

        return arr[n - 1];
    }
};
