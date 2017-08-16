#include <iostream>
#include <string>
#include <vector>

using namespace std;

int radixTransform(const string &str);
int cal(int x, int n);

int main()
{
    string in;
    while (cin >> in)
    {
        cout << radixTransform(in) << endl;
    }
    return 0;
}

int radixTransform(const string &str)
{
    string map = "0123456789ABCDEF";
    vector<int> index;
    for (int i = 2; i < str.size(); i++)
        index.push_back(map.find(str[i]));
    int num = 0;
    for (int i = 0; i < index.size(); i++)
    {
        int idx = index.size() - i - 1;
        num += cal(index[i], idx);
    }
    return num;
}

int cal(int x, int n)
{
    if (n == 0)
        return x;
    int e = 1;
    for (int i = 0; i < n; i++)
        e *= 16;
    return x * e;
}
