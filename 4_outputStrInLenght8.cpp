#include <iostream>
#include <string>
#include <vector>

using namespace std;

void paddingZeros(string &str);

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;

    vector<string> ret;

    paddingZeros(str1);
    paddingZeros(str2);

    return 0;
}

void paddingZeros(string &str)
{
    size_t sz = str.size();
    size_t mod_sz = sz % 8;
    if (mod_sz != 0)
        for (int i = 0; i < 8 - mod_sz; i++)
            str += '0';
    int cnt = 1;
    for (auto &c : str)
    {
        cout << c;
        if (cnt % 8 == 0)
            cout << endl;
        cnt++;
    }
}