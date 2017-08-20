#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int a = 2;
        int d = 3;
        int result = n * a + (n - 1) * n / 2 * d;
        cout << result << endl;
    }
    return 0;
}