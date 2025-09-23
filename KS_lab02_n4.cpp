#include <iostream> 
using namespace std;
int main()
{
	setlocale(0, "");
	int  dM, dW;
	cout << "Введите дату: ";
	cout << "День месяца: ";
	cin >> dM;
	cout << "Номер дня в неделе: ";
	cin >> dW;
	if (13 == dM)
		if (5 == dW || 2 == dW)
			cout << "неудачный день ";
	if (17 == dM)
		if (5 == dW)
			cout << "неудачный день ";
	return 0;
}