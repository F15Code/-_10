#include <iostream>
using namespace std;

void inputmasa(int** a, int** b, int** c, int n, int m, int n_1, int m_1)
m_1 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i][j] = 0;
			for (int c = 0; c < n_1; c++) {
				c[i][j] += a[i][c] * b[c][j];
			}
		}
	}
}