#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "UKR");
	const int n = 9;
	int *mas;
	int i, k = 0;
	float s = 0;
	mas = new int[n];

	cout << "Ввід оцінок: " << endl;
	for (i = 0; i < n; i++) {
		cin >> mas[i];
	}

	for (i = 0; i < n; i++) {
		s += mas[i];
		if (mas[i] == 5) {
			k++;
		}
	}
	cout << endl;

	cout.precision(3);
	cout << "Середній бал = " << s / n << endl; cout << endl;
	cout << "Кількість відмінників = " << k << endl;

	delete[]mas;

	int n_1, m;
	cout << "Введіть кількість рядків і стовпців: "; cin >> n_1 >> m;

	int **a = new int *[n_1];
	for (int i = 0; i < n_1; i++) {
		a[i] = new int[m];
	}

	for (int i = 0; i < n_1; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Введіть масив a[" << i << "][" << j << "] = "; cin >> a[i][j];
		}
	}
	cout << "Масив a: " << endl;
	for (int i = 0; i < n_1; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << a[i][j];
		}
	}
	cout << endl;
	delete[]a;
	system("pause");
	return 0;
}
