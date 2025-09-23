#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	double x, y, z;
	cout << "Введите значения сторон треугольника: " << endl;
	cin >> x >> y >> z;

	if (x <= 0 || y <= 0 || z <= 0) {
		cout << "Такого треугольника не существует. (все числа должны быть положительны)";
		return 1;
	}
	if (x + y > z || y + z > x || z + x > y) {
		cout << "Такой треугольник существует" << endl;
	}
	if (x == y && y == z) {
		cout << "Треугольник равносторонний" << endl;
	}
	if (x == y || y == z || z == x) {
		cout << "Треугольник равнобедренный" << endl;
	}
	if (x*x + y*y == z*z || y*y + z*z == x*x || z*z + x*x == y*y) {
		cout << "Треугольник прямоугольный" << endl;
	}
	return 0;
}

