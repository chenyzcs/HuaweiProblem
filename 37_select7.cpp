#include <iostream>

using namespace std;

bool include7(int n)
{
    if (n % 7 == 0)
        return true;
    while (n)
    {
        int a = n % 10;
        if (a == 7)
            return true;
        n /= 10;
    }
    return false;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (include7(i))
                cnt++;
        }
        cout << cnt << endl;
    }
}