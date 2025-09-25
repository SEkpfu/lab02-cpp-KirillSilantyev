#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int N;
    cout << "Введите целое число: N= "; cin >> N;
    if (N > 0)
        cout << "Число положительное";
    if (N < 0)
        cout << "Число отрицательное";
    if (N == 0)
        cout << "Число равно нулю";
    return 0;
}
