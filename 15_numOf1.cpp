#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int cnt = 0;
        while (n)
        {
            cnt++;
            n = n & (n - 1);
        }
        cout << cnt << endl;
    }
    return 0;
}