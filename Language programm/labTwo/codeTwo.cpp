#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "������� ������� ����� \n";
	cin >> n;
	if (n == 0) {
		cout << "�������� �������� \n";
		return 0;
	};
	int m;
	cout << "������� ����� \n";
	cin >> m;
	while (m != 0) {
		if (m == n) {
			cout << "������� " << m;
			return 0;
		}
		cin >> m;
	};
	cout << "�� �������";
	return 0;
}
