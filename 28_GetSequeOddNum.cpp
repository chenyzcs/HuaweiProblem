#include <iostream>
#include <string>
#include <vector>

using namespace std;

string GetSequeOddNum(int n)
{
    int cube = n * n * n;
    string ans = "";
    vector<int> odds;
    for (int i = 1; i < cube - 1; i += 2)
        odds.push_back(i);
    int i = 0, j = 1;
    int sum = odds[i] + odds[j];
    while (sum != cube)
    {
        if (sum < cube)
        {
            j++;
            sum += odds[j];
        }
        else if (sum > cube)
        {
            sum -= odds[i--];
        }
    }
    for (int k = i; k < j; k++)
        ans += to_string(odds[k]);
    ans += to_string(odd[j]);
    return ans;
}

int main()
{
    int n;
    while (cin >> n)
    {
        string ans = GetSequeOddNum(int n);
        cout << ans << endl;
    }
    return 0;
}