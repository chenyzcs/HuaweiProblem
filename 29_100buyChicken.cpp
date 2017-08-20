#include <iostream>

using namespace std;

void chicken()
{
	int i = 0, j = 0, k = 0;
	for (int i = 0; i < 21; i++)
		for (int j = 0; j < 34; j++)
			for (int k = 0; k < 100; k++)
				if (k % 3 == 0)
					if (5 * i + 3 * j + k / 3 == 100)
						if (i + j + k == 100)
							cout << i << " " << j << " " << k << endl;
}

int main()
{
	int n;
	while (cin >> n)
	{
		chicken();
	}
	return 0;
}