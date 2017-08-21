#include <iostream>

using namespace std;

int main()
{
    int row, col;
    while (cin >> row >> col)
    {

        int i1, j1, i2, j2;
        cin >> i1 >> j1 >> i2 >> j2;
        int insert_row, insert_col;
        cin >> insert_row >> insert_col;
        int trace_row, trace_col;
        cin >> trace_row >> trace_col;
        if (row > 9 || row < 0 || col > 9 || col < 0)
            cout << -1 << endl;
        else if (row >= 0 && row <= 9 && col >= 0 && col <= 9)
            cout << 0 << endl;

        if (i1 < row && i1 >= 0 && j1 < col && j1 >= 0)
            if (i2 < row && i2 >= 0 && j2 < col && j2 >= 0)
                cout << 0 << endl;
        if (i1 >= row || i1 < 0 || j1 >= col || j1 < 0)
            cout << -1 << endl;
        if (i2 >= row || i2 < 0 || j2 >= col || j2 < 0)
            cout << -1 << endl;
        if (insert_row < row && insert_row >= 0)
            cout << 0 << endl;
        else
            cout << -1 << endl;
        if (insert_col < col && insert_col >= 0)
            cout << 0 << endl;
        else
            cout << -1 << endl;
        if (trace_row < row && trace_row >= 0)
            if (trace_col < col && trace_col >= 0)
                cout << 0 << endl;
            else
                cout << -1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}