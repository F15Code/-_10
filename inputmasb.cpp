#include <iostream>
using namespace std;

void inputmasb(int** b, int n_1, int m_1) {
	for (int i = 0; i < n_1; i++) {
		for (int j = 0; j < m_1; j++) {
			cout << "b[" << i << "][" << j << "] = "; cin >> b[i][j];
		}
	}
}