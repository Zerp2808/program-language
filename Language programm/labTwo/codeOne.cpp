#include <iostream>
using namespace std;
int main()
{
	int n;
	float a, sum;
	cout << "������� ���-�� ��������� \n";
	cin >> n;
	cout << "������� ����� \n";
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
	}
	float mid = sum / n;
	cout << "������� ��������: " << mid;
	return 0;
}
