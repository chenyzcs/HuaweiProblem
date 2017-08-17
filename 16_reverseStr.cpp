#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        for (auto it = str.rbegin(); it != str.rend(); it++)
            cout << *it;
        cout << endl;
    }
    return 0;
}