#include <iostream>
using namespace std; 

int main(int argc, char** argv) { 
	int n, N;
	int iRes;
	double fRes;
	//���� ������
	//�������� N � ����� �������, ���
	//� ���������� �� 1 
	//� ���������� �� 2 
	//� ���������� �� 3 
	//�������� n � ������ ������� ����� N 
	//������ 18��105 => N = 1812105, n = 2105    
	cout << "������� N: ";
	cin >> N;    
	cout << "������� n: ";  
	cin >> n; 
	// �������    
	iRes = N / n;
	fRes = N / n;
	fRes = 1.0 * N / n; 
	// ��������� � �������   
	iRes = N / 10 * n;  
	iRes = N * n / 10; 
	// ��������   
	iRes = N + 2140000000;  
	iRes = N + 2150000000; 
	// ������������  
	iRes = fRes; 
	// xor  
	iRes = iRes ^ iRes;
	return iRes;
}