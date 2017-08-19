#include <iostream>

using namespace std;

int index(int n)
{
    if (n <= 2)
        return -1;
    else if (n % 2 == 1)
        return 2;
    else
    {
        if (n % 4 == 0)
            return 3;
        else
            return 4;
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << index(n) << endl;
    }
    return 0;
}