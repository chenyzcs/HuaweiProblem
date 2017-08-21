#include <iostream>
#include <string>
#include <vector>

using namespace std;

void lowerCase(string &str)
{
    for (auto it = str.begin(); it != str.end(); it++)
    {
        if (*it >= 'A' && *it <= 'Z')
            *it -= 32;
    }
}

int LCS(string &str1, string &str2)
{
    if (str1.empty() || str2.empty())
        return -1;
    lowerCase(str1);
    lowerCase(str2);
    size_t sz1 = str1.size();
    size_t sz2 = str2.size();

    vector<vector<int>> dp(sz1, vector<int>(sz2, 0));
    for (int i = 0; i < sz1; i++)
        if (str1[i] == str2[0])
            dp[i][0] = 1;
    for (int j = 0; j < sz2; j++)
        if (str1[0] == str2[j])
            dp[0][j] = 1;
    int max = 0;
    for (int i = 1; i < sz1; i++)
    {
        for (int j = 1; j < sz2; j++)
        {
            dp[i][j] = (str1[i] == str2[j]) ? 1 + dp[i - 1][j - 1] : 0;
            if (dp[i][j] > max)
                max = dp[i][j];
        }
    }
    return max;
}

int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        cout << LCS(str1, str2) << endl;
    }
    return 0;
}