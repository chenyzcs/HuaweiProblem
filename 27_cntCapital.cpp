#include <iostream>
#include <string>

using namespace std;

int cntCapital(const string &str)
{
    if (str.empty())
        return -1;
    size_t cnt = 0;
    for (auto it = str.begin(); it != str.end(); it++)
        if (*it >= 'A' && *it <= 'Z')
            cnt++;
    return cnt;
}

int main()
{
    string str;
    while (cin >> str)
    {
        cout << cntCapital(str) << endl;
    }
    return 0;
}