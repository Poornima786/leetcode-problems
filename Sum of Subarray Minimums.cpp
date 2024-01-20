#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int mod = 1000000007;
        int n = arr.size();
        vector<int> st;  // Use a vector instead of dynamic array

        long ans = 0;

        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || arr[st.back()] > arr[i])) {
                int idx = st.back();
                st.pop_back();

                int leftIdx = st.empty() ? -1 : st.back();
                ans += 1L * arr[idx] * (i - idx) * (idx - leftIdx);
                ans %= mod;
            }
            st.push_back(i);
        }

        return static_cast<int>(ans);
    }
};
