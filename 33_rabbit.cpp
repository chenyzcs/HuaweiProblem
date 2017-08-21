#include <iostream>

using namespace std;

int rabbit(int n)
{
    if (n < 3)
        return 1;
    return rabbit(n - 1) + rabbit(n - 2);
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << rabbit(n) << endl;
    }
    return 0;
}