#include <iostream>
using namespace std;
int main()
{
	int n;
	float a, sum;
	cout << "¬ведите кол-во элементов \n";
	cin >> n;
	cout << "¬ведите числа \n";
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
	}
	float mid = sum / n;
	cout << "—реднее значение: " << mid;
	return 0;
}
