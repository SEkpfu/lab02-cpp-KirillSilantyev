#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    double x, y;
    int a;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;
    if (x >= 0 && y >= 0) {
        if (x * x + y * y <= 36) {
            a = 1;
        }
        else {
            a = 0;
        }
    }
    else if (x < 0 && y >= 0) {
        if (x >= -3 && y <= 6 && y <= 2 * x + 6) {
            a = 1;
        }
        else {
            a = 0;
        }
    }
    else if (x < 0 && y < 0) {
        if (x >= -3 && y >= -6) {
            a = 1;
        }
        else {
            a = 0;
        }
    }
    else if (x >= 0 && y < 0) {
        if (x <= 6 && y >= -6 && y >= x - 6) {
            a = 1;
        }
        else {
            a = 0;
        }
    }
    else {
        a = 0;
    }

    if (a == 1) {
        cout << "гуд" << endl;
    }
    else {
        cout << "не попала" << endl;
    }

    return 0;
}