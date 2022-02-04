#include <iostream>
using namespace std;

void inputmasa(int** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
		}
	}
}