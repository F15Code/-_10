#include <iostream>
#include <iomanip>

using namespace std;

void showmasb(int** b, int n_1, int m_1)
{
	for (int i = 0; i < n_1; i++)
	{
		for (int j = 0; j < m_1; j++)
		{
			cout << setw(3) << b[i][j];
		}
		cout << endl;
	}
}