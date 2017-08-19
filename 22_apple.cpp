#include <iostream>

using namespace std;

int apples(int m, int n)
{
    if (m == 0 || n == 1)
        return 1;
    if (m < n)
        return apples(m, m);
    return apples(m, n - 1) + apples(m - n, n);
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        cout << apples(m, n) << endl;
    }
    return 0;
}