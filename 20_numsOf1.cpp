#include <iostream>

using namespace std;

int numsOf1(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = n & (n - 1);
    }
    return cnt;
}

int main()
{
    int num;
    while (cin >> num)
    {
        cout << numsOf1(num) << endl;
    }
    return 0;
}