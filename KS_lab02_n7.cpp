#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    char f;
    double a, b, result;

    cout << "Введите операцию (+, -, *): ";
    cin >> f;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    switch (f) {
    case '+':
        result = a + b;
        cout << a << " + " << b << " = " << result << endl;
        break;

    case '-':
        result = a - b;
        cout << a << " - " << b << " = " << result << endl;
        break;

    case '*':
        result = a * b;
        cout << a << " * " << b << " = " << result << endl;
        break;

    default:
        cout << "Ошибка: неизвестная операция!" << endl;
        break;
    }

    return 0;
}