#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int n1, n2;
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> n1 >> n2;
            if (i == 0)
                map[n1] = n2;
            else
                map[n1] += n2;
        }
        for (auto it = map.begin(); it != map.end(); it++)
            cout << it->first << " " << it->second << endl;
    }
}