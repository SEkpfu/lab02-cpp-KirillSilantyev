#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(0, "");
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;
    double radius = 6.0;
    double zapret = 3.0;
    if (x * x + y * y <= radius * radius && x * x + y * y >= zapret && x >= 0) {
        cout << "Попал";
    }
    else {
        cout << "не попал";
    }

    return 0;
}