#include <iostream> 
using namespace std;
int main()
{
	setlocale(0, "");
	int  a, b, c, r, z;
	cout << "Введи первую сторону коробки: ";
	cin >> a;
	cout << "Введи вторую сторону коробки: ";
	cin >> b;
	cout << "Введи радиус торта: ";
	cin >> r;
	if (r * 2 <= min(a, b)) {
		cout << "Торт поместится в коробку" << endl;
	}
	else {
		cout << "Торт не поместится в коробку" << endl;
	}
	cout << "Введи высоту коробки: ";
	cin >> c;
	cout << "Введи высоту торта: ";
	cin >> z;
	if (c >= z) {
		cout << "Торт с заданной высотой поместится в коробку";
	}
	else {
		cout << "Торт с заданной высотой не поместится в коробку";
	}

	return 0;
}
