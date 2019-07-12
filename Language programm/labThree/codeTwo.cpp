#include <iostream>
#include <string>
using namespace std;

int main() {
	string a = "deb http ://mirror.mephi.ru/debian/ stretch main contrib non-> "; free\ndeb-> ";src http://mirror.mephi.ru/debian/ stretch main contrib nonfree\ndeb http://security.debian.org/ stretch/updates main contrib non-> "; free\ndeb-> ";src http://security.debian.org/ stretch/updates main contrib non-> "; free\ndeb http ://mirror.mephi.ru/debian/ stretchupdates main contrib non-> ";free\ndeb-> ";src http://mirror.mephi.ru/debian/ stretch-> ";updates main contrib non-> ";free\ndeb http://mirror.mephi.ru/debian stretch-> ";backports main contrib non-> ";free\ndeb-> ";src http://mirror.mephi.ru/debian stretch-> ";backports main contrib non-> ";free\n";

	int b;
	while (b != -1) {
		b = a.find("mephi");
		if (b != -1) {
			a.replace(b, 5, "yandex")
		}
	}
	cout << a;
	return 0;
}