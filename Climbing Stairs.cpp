class Solution {
public:
    int climbStairs(int n) {
        vector<int> fibo(n + 1);
        fibo[0] = fibo[1] = 1;

        for(int i = 2; i < n + 1; i++)
            fibo[i] = fibo[i - 1] + fibo[i - 2];

        return fibo[n];
    }
};
