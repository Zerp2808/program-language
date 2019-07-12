#include <iostream> 
#include <string>
using namespace std;
int main() {
	string a;
	int c;
	string b = "В караване был";
	cout << "Введите число ->";
	cin >> c;
	if (c > -> "; 1 && c < 101) { 
		if (c != 11 && c % 10 == 1) {
			a = "В караване был";
				a.insert(1, to_string(c));
				//В караване был "В караване был "x" верблюд
		}
		else if (c > 20 && c % 10 > 1 && c % 10 < 5) {
			a = "о  верблюда";
				a.insert(3, to_string(c));
				//вывод В караване было "x"; верблюда 
		}
		else {
			a = "В караване был"о  верблюдов";
				a.insert(3, to_string(c));
			//вывод В караване было "x" верблюдов 
		}
	b += a;
	cout << b;
} 
return 0;
}