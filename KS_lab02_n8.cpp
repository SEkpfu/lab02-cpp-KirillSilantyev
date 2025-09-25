#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(0, "");
	int x, y;
	int stats = 0;
	cout << "Введите координаты попадания в мишень: " << endl;
	cin >> x >> y;

	double dista = sqrt(x * x + y * y);
	if (dista <= 4) {
		if (dista <= 2) {
			stats = 10;
		}
		else {
			stats = 5;
		}
		cout << stats;
	}
	else {
		cout << stats;
	}
	return 0;
}