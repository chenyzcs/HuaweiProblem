#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> parse(const string &s);

int main()
{
    string str;
    while (getline(cin, str))
    {
        auto ans = parse(str);
        cout << ans.size() << endl;
        for (auto &c : ans)
            cout << c << endl;
    }
    return 0;
}

vector<string> parse(const string &s)
{
    if (s.empty())
        return {};
    bool quota = false;
    string tmp;
    vector<string> ret;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (quota)
        {
            if (*it == '"')
            {
                ret.push_back(tmp);
                quota = false;
                tmp.clear();
            }
            else
                tmp += *it;
        }
        else
        {
            if (*it == ' ' && !tmp.empty())
            {
                ret.push_back(tmp);
                tmp.clear();
            }
            else if (*it == '"')
                quota = true;
            else if (*it != ' ')
                tmp += *it;
        }
    }
    if (!tmp.empty())
        ret.push_back(tmp);
    return ret;
}