#include <iostream>
#include <string>

using namespace std;

void getLevel(const string &str)
{
    if (str.empty())
        return;
    int len = str.size();
    bool Capital = false;
    bool lowerCase = false;
    int num = 0;
    int symbol = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            lowerCase = true;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            Capital = true;
        else if (str[i] >= '0' && str[i] <= '9')
            num++;
        else
            symbol++;
    }
    int score = 0;
    if (len <= 4)
        score += 5;
    else if (len >= 5 && len <= 7)
        score += 10;
    else
        score += 25;

    if (lowerCase && Capital)
        score += 20;
    else if (lowerCase && !Capital)
        score += 10;
    else if (!lowerCase && Capital)
        score += 10;
    else
        score += 0;

    if (num == 1)
        score += 10;
    else if (num > 1)
        score += 20;

    if (symbol == 1)
        score += 10;
    else if (symbol > 1)
        score += 25;

    if (lowerCase || Capital && num > 0)
        score += 2;
    else if (lowerCase || Capital && num > 0 && symbol > 0)
        score += 3;
    else if (lowerCase && Capital && num > 0 && symbol > 0)
        score += 5;

    if (score >= 90)
        cout << "VERY_SECURE" << endl;
    else if (score >= 80)
        cout << "SECURE" << endl;
    else if (score >= 70)
        cout << "VERY_STRONG" << endl;
    else if (score >= 60)
        cout << "STRONG" << endl;
    else if (score >= 50)
        cout << "AVERAGE" << endl;
    else if (score >= 25)
        cout << "WEAK" << endl;
    else
        cout << "VERY_WEAK" << endl;
}

int main()
{
    string password;
    while (cin >> password)
    {
        getLevel(password);
    }
    return 0;
}