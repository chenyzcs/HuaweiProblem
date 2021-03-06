#include <iostream>
#include <vector>

using namespace std;

int pathNums(int n, int m)
{
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        dp[i][0] = 1;
    for (int j = 0; j < m; j++)
        dp[0][j] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[n - 1][m - 1];
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        cout << pathNums(n + 1, m + 1) << endl;
    }
    return 0;
}