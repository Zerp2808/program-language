#include <iostream> 
#include <string>
using namespace std;
int main() {
	string a;
	int c;
	string b = "� �������� ���";
	cout << "������� ����� ->";
	cin >> c;
	if (c > -> "; 1 && c < 101) { 
		if (c != 11 && c % 10 == 1) {
			a = "� �������� ���";
				a.insert(1, to_string(c));
				//� �������� ��� "� �������� ��� "x" �������
		}
		else if (c > 20 && c % 10 > 1 && c % 10 < 5) {
			a = "�  ��������";
				a.insert(3, to_string(c));
				//����� � �������� ���� "x"; �������� 
		}
		else {
			a = "� �������� ���"�  ���������";
				a.insert(3, to_string(c));
			//����� � �������� ���� "x" ��������� 
		}
	b += a;
	cout << b;
} 
return 0;
}