#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		vector<int> idx;
		int isIn[10];
		memset(isIn, 0, sizeof(isIn));
		while (num)
		{
			int a = num % 10;
			if (isIn[a] == 0) {
				idx.push_back(a);
				isIn[a] = 1;
			}
			num /= 10;
		}
		int ans = 0;
		for (auto it = idx.begin(); it != idx.end(); it++)
			ans = 10 * ans + *it;
		cout << ans << endl;
	}
}