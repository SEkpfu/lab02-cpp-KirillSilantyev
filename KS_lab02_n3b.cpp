#include <iostream>
using namespace std;

double f(double x) {
    setlocale(0, "");
    if (x <= -2) {
        return 0;
    }
    if (x <= 0) {
        return x * x + 4.0 * x + 5.0;
    }
    double ww = x * x + 4.0 * x - 5.0;
    if (ww == 0) {
        cout << "Не числовой результат" << endl;
        return 0;
    }

    return 1.0 / ww;
}

int main() {
    double x;
    cin >> x;
    double result = f(x);
    cout << "f(x) = " << result << endl;
    return 0;
}