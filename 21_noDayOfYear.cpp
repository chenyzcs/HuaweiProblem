#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    if (year < 0)
        return -1;
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    else if (year % 400 == 0)
        return true;
    return false;
}

int noDaysOfYear(int year, int mon, int day)
{
    if (mon < 1 || mon > 12)
        return -1;
    if (day < 0 || day > 31)
        return -1;
    int dayOfMon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nums = 0;
    for (int i = 0; i < mon - 1; i++)
        nums += dayOfMon[i];
    nums += day;
    bool isLeap = isLeapYear(year);
    if (!isLeap)
        return nums;
    if (isLeap && mon > 1)
        return nums + 1;
    return nums;
}

int main()
{
    int year, mon, day;
    while (cin >> year >> mon >> day)
    {
        cout << noDaysOfYear(year, mon, day) << endl;
    }
    return 0;
}