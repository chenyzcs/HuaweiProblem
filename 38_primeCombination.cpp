#include <iostream>
#include <vector>

using namespace std;

vector<int> getPrimer(int n)
{
    if (n <= 2)
        return {};
    vector<int> ret;
    for (int i = 2; i < n; i++)
    {
        bool isPrimer = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                isPrimer = false;
        }
        if (isPrimer)
            ret.push_back(i);
    }
    return ret;
}

vector<int> combinePrimer(int tag)
{
    if (tag < 2)
        return {};
    auto primer = getPrimer(tag);
    if (primer.empty())
        return {};
    vector<int> aim(2, 0);
    int step = 0xffff;
    int sum;
    int i = 0, j = primer.size() - 1;
    while (i < j)
    {
        sum = primer[i] + primer[j];
        if (sum > tag)
        {
            j--;
        }
        else if (sum < tag)
            i++;
        else
        {
            int tmp = j - i;
            if (tmp < step)
            {
                step = tmp;
                aim[0] = primer[i];
                aim[1] = primer[j];
            }
            j--;
        }
    }
    return aim;
}

int main()
{
    int n;
    while (cin >> n)
    {
        auto aim = combinePrimer(n);
        cout << aim[0] << endl;
        cout << aim[1] << endl;
    }
    return 0;
}