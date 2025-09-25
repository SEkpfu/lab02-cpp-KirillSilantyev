#include <iostream>
using namespace std;

double f(double x) {
    if (x <= -2) {
        return 0;
    }
    if (x <= 10) {
        return x * x + 4 * x + 5;
    }
    return 1 / (x * x + 4 * x - 5);
}

int main()
{
    int x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}


