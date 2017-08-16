#include <iostream>
#include <vector>

using namespace std;

bool isPrimer(long num);

int main()
{
    long num;
    while (cin >> num)
    {
        int i = 2;
        while (num != 0 && i < num / 2)
        {
            if (isPrimer(i))
            {
                if (num % i == 0)
                {
                    cout << i << " ";
                    num /= i;
                }
                else
                    i++;
            }
            else
                i++;
        }
        cout << num << " ";
    }
    return 0;
}

bool isPrimer(long num)
{
    bool isPrimer = false;
    if (num < 2)
        return isPrimer;
    for (int i = 2; i < num / 2; i++)
        if (num % i == 0)
            return isPrimer;
    return true;
}