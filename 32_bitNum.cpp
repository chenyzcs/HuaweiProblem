#include <iostream>

using namespace std;

int maxNums(int n)
{
    int cnt = 0;
    int max = -1;
    int tag = 0;
    unsigned mask = 1;
    while (mask)
    {
        if ((mask & n) != 0)
        {
            tag += 1;
            if (max < tag)
                max = tag;
        }
        else
        {
            tag = 0;
        }
        mask = mask << 1;
    }
    return max;
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << maxNums(n) << endl;
    }
    return 0;
}