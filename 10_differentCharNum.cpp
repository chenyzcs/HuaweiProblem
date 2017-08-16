#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        int ch[128];
        memset(ch, 0, sizeof(ch));
        for (auto it = str.begin(); it != str.end(); it++)
        {
            ch[*it]++;
        }
        int cnt = 0;
        for (int i = 0; i < 128; i++)
            if (ch[i] != 0)
                cnt++;
        cout << cnt << endl;
    }
}