#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "UKR");
	cout << "Hello World !" << endl;
	system("pause");
	return 0;
}