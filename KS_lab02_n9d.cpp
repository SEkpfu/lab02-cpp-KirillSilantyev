#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(0, "");
    double x, y;
    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;
    
    if (x >= 0 && x <= 1 && y >= 0 && y <= -2*x+2) { 
        cout << "Попал";
    }
    else {
        cout << "не попал";
    }

    return 0;
}