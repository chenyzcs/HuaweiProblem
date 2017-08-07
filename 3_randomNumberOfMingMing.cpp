#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    size_t sz;
    while (cin >> sz)
    {
        vector<int> v;
        for (int i = 0; i < sz; i++)
        {
            int e;
            cin >> e;
            v.push_back(e);
        }
        sort(v.begin(), v.end());
        auto it = unique(v.begin(), v.end());
        v.erase(it, v.end());
        for (auto &c : v)
            cout << c << endl;
    }
    return 0;
}