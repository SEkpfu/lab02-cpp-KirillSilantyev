#include <iostream> 
using namespace std;
int main()
{
	setlocale(0, "");
	int  x, y, z, a, b;
	cout << "Введи три стороны кирпича: " << endl;
	cin >> x; cin >> y; cin >> z;
	cout << "Введи стороны прямоугольного отверстия:" << endl; 
	cin >> a; cin >> b; 
	if ((x <= a && y <= b) || (x <= b && y <= a)) {
		cout << "Кирпич пройдет через отверстие";
	}
	else if ((x <= a && z <= b) || (z <= a && x <= b)) {
		cout << "Кирпич пройдет через отверстие";
	}
	else if ((y <= a && z <= b) || (z <= a && y <= b)) {
		cout << "Кирпич пройдет через отверстие";
	}
	else {
		cout << "Кирпич не пройдет через отверстие";
	}
	return 0;
}
