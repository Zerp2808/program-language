#include <climits>
#include <cstdlib> 
#include <iostream> 
using namespace std;

int main(int argc, char** argv) {
	char* path = new char[PATH_MAX]; 
	const char* id[] = { "�������\t\t", "���\t\t", "��������\ t", "������\t\t" }; 
	realpath(argv[0], path);
	cout << "���� � ������������ �����: "; 
	cout << path << endl; 
	delete[] path; for(int i = 1; i < argc; ++i) { 
		if(i - 1 < 4) 
			cout << id[i - 1];
		cout << string(argv[i]) << endl;
		return 0; }
}