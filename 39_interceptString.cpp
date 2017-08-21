#include <iostream>
#include <string>

using namespace std;

bool isChar(char s)
{
    if (s >= 'a' && s <= 'z')
        return true;
    else if (s >= 'A' && s <= 'Z')
        return true;
    return false;
}

int main()
{
    string str;
    int n;
    while (cin >> str >> n)
    {
        string tmp;
        int i = 0;
        int cnt = 0;
        while (cnt < n)
        {
            if (isChar(str[i]))
            {
                tmp += str[i];
                cnt++;
                i++;
            }
            else
            {
                tmp += str[i];
                i++;
                tmp += str[i];
                cnt++;
                i++;
            }
        }
        cout << tmp << endl;
    }
    return 0;
}