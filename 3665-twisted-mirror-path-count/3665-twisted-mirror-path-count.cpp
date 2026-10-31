class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        const int MOD = 1e9 + 7;

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<long long>> right(m, vector<long long>(n, 0));
        vector<vector<long long>> down(m, vector<long long>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                long long fromLeft = (j > 0) ? right[i][j - 1] : 0;

                long long fromAbove = (i > 0) ? down[i - 1][j] : 0;

                // Starting position
                if (i == 0 && j == 0) {
                    fromAbove = 1;
                }

                if (grid[i][j] == 0) {

                    long long ways = (fromLeft + fromAbove) % MOD;

                    right[i][j] = ways;
                    down[i][j] = ways;

                } 
                else {

                    right[i][j] = fromAbove;
                    down[i][j] = fromLeft;

                }
            }
        }

        return right[m - 1][n - 1];
    }
};