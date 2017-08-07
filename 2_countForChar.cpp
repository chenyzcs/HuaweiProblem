#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char tag;
    cin >> tag;

    if (tag >= 'A' && tag <= 'Z')
        tag += 32;
    // cout << tag << endl;
    size_t sz = 0;
    for (auto it = str.begin(); it != str.end(); it++)
    {
        if (*it >= 'A' && *it <= 'Z')
            *it += 32;
        if (*it == tag)
            sz++;
    }
    cout << sz << endl;
    return 0;
}