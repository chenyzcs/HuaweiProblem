#include <iostream>

using namespace std;

int main()
{
    double in;
    while (cin >> in)
    {
        double x = in - int(in);
        if (x - 0.4 >= 0.000000001)
            cout << (int)in + 1 << endl;
        else
            cout << (int)in << endl;
    }
    return 0;
}