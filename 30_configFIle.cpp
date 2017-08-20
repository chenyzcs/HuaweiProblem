#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, string> m = {
        {"reset", "reset what"},
        {"reset board", "board fault"},
        {"board add", "where to add"},
        {"board delet", "no board at all"},
        {"reboot backplane", "impossible"},
        {"backplane abort", "install first"}};
    string str;
    while (cin >> str)
    {
        }
    return 0;
}