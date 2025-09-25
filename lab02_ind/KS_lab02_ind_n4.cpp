#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите целое число: ";
    cin >> n;
    cout << "Бурундук получил " << n << " ";
    if (n % 10 == 1 && n % 100 != 11) {
        cout << "орех";
    }
    else if (n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 10 || n % 100 >= 20)) {
        cout << "ореха";
    }
    else {
        cout << "орехов";
    }

    

    return 0;
}