#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "������� �����\n";
	cin >> n;
	while (n != 0) {
		if (n > 0) {
			sum += n;
		}
		cout << "������� �����\n";
		cin >> n;
	}
	cout << sum;
	return 0;
}
