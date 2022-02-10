#include <iostream>
#include <iomanip>

using namespace std;

void showmasa(int** a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}