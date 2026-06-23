class Solution {
    static final int MOD = 1000000007;

    public int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1; // range size

        int[][] prev = new int[m][2];
        int[][] curr = new int[m][2];

        // Base case: length = 1
        for (int j = 0; j < m; j++) {
            prev[j][0] = 1; 
            prev[j][1] = 1;
        }

        // Build dp for lengths 2..n
        for (int i = 1; i < n; i++) {
            // Case 1: sign = 0 (decreasing)
            int prefixSum = 0;
            for (int j = 0; j < m; j++) {
                curr[j][0] = prefixSum;
                prefixSum = (prefixSum + prev[j][1]) % MOD;
            }

            // Case 2: sign = 1 (increasing)
            int suffixSum = 0;
            for (int j = m - 1; j >= 0; j--) {
                curr[j][1] = suffixSum;
                suffixSum = (suffixSum + prev[j][0]) % MOD;
            }

            // swap references (rolling array)
            int[][] temp = prev;
            prev = curr;
            curr = temp;
        }

        // Answer = sum of dp[n-1][j][*] over all j
        int ans = 0;
        for (int j = 0; j < m; j++) {
            ans = (ans + prev[j][0]) % MOD;
            ans = (ans + prev[j][1]) % MOD;
        }

        return ans;
    }
}