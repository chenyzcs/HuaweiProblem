#include <iostream>
#include <vector>
#include <string>

using namespace std;

int decode(const string &code)
{
    if (code.empty())
        return -1;
    string rcode = "";
    for (auto rit = code.rbegin(); rit != code.rend(); rit++)
        rcode += *rit;
    size_t sz = code.size();
    vector<vector<int>> dp(sz, vector<int>(sz, 0));
    for (int i = 0; i < sz; i++)
        if (code[0] == rcode[i])
            dp[i][0] = 1;
    for (int j = 0; j < sz; j++)
        if (code[j] == rcode[0])
            dp[0][j] = 1;
    int max = 0;
    for (int i = 1; i < sz; i++)
    {
        for (int j = 1; j < sz; j++)
        {
            if (code[j] == rcode[i])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > max)
                    max = dp[i][j];
            }
        }
    }
    return max;
}

int main()
{
    string code;
    while (cin >> code)
    {
        int ans = decode(code);
        cout << ans << endl;
    }
    return 0;
}