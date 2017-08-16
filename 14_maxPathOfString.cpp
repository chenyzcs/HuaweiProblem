#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<string> str;
        for (int i = 0; i < n; i++)
        {
            string tmp;
            cin >> tmp;
            str.push_back(tmp);
        }
        sort(str.begin(), str.end());
        for (auto &c : str)
            cout << c << endl;
    }
    return 0;
}