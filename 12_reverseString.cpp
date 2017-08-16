#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;
    while (cin >> in)
    {
        for (auto it = in.rbegin(); it != in.rend(); it++)
            cout << *it;
        cout << endl;
    }
    return 0;
}