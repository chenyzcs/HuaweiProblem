#include <iostream>

using namespace std;

bool isPerfectNumber(int num)
{
    int total = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            total += i;
    }
    if (total == num)
    {
        cout << num << endl;
        return true;
    }
    return false;
}

int cntPerfectNumber(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (isPerfectNumber(i))
            cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int cnt;
        cnt = cntPerfectNumber(n);
        cout << cnt << endl;
    }
    return 0;
}