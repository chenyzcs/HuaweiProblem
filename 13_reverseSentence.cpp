#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string in;
    while (getline(cin, in))
    {
        string tmp;
        stack<string> stk;
        for (auto it = in.begin(); it != in.end(); it++)
        {
            if (*it != ' ')
            {
                tmp += *it;
            }
            else
            {
                stk.push(tmp);
                stk.push(" ");
                tmp.clear();
            }
        }
        stk.push(tmp);
        while (!stk.empty())
        {
            auto top = stk.top();
            stk.pop();
            cout << top;
        }
        cout << endl;
    }
}