#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        string tmp;
        while (num)
        {
            int a = num % 10;
            num /= 10;
            tmp += to_string(a);
        }
        cout << tmp << endl;
    }
    return 0;
}