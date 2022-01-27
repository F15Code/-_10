#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "UKR");
	cout << "Зьомич лох !" << endl;
	system("pause");
	return 0;
}
