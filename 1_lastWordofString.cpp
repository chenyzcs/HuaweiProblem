#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        size_t sz = str.size();
        int i = sz - 1;
        size_t cnt = 0;
        while (i >= 0 && str[i] != ' ')
        {
            i--;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}