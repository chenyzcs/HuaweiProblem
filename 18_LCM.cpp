#include <iostream>

using namespace std;

int LCM(int n1, int n2)
{
    int min = (n1 > n2) ? n2 : n1;
    int max = n1 * n2;
    for (int i = min; i <= max; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
            return i;
    }
    return max;
}

int GCD(int n1, int n2)
{
    if (n1 < 0 || n2 < 0)
        return 0;
    if (n1 < n2)
        swap(n1, n2);
    while (n2)
    {
        int r = n1 % n2;
        n1 = n2;
        n2 = r;
    }
    return n1;
}

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    //    cout << LCM(n1, n2) << endl;
    //    cout << GCD(n1, n2) << endl;
    cout << (n1 * n2) / GCD(n1, n2) << endl;
    return 0;
}