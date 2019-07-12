#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Введите искомое число \n";
	cin >> n;
	if (n == 0) {
		cout << "Неверное значение \n";
		return 0;
	};
	int m;
	cout << "Введите число \n";
	cin >> m;
	while (m != 0) {
		if (m == n) {
			cout << "Найдено " << m;
			return 0;
		}
		cin >> m;
	};
	cout << "Не найдено";
	return 0;
}
