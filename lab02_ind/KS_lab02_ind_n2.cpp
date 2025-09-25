#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    double x, y;

    cout << "Введите значение x: ";
    cin >> x;

    if (x >= 5) {
        y = cos(M_PI * x - M_PI / 2);
    }
    else if (x > 0) {
        y = 10.0 * 2.0 / 3.0;
    }
    else { 
        y = 2.0 / sqrt(x * x + 1);
    }
    cout << y << endl;

    return 0;
}