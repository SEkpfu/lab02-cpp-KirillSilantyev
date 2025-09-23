#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    int x, y;
    cout << "Введите координаты попадания (x, y): ";
    cin >> x >> y;
    if ((x >= -2 && x <= 0) && (y >= 0 && y <= 1)) {
        cout << "Вы попали!";
    }
    else {
        cout << "Вы не попали!";
    }
    return 0;
}