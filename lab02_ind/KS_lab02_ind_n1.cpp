#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(0, "");
    string yaz;
    int nomerdnya;
    cin >> yaz;
    cin >> nomerdnya;
    if (yaz != "RUS" && yaz != "ENG") {
        cout << "неверный язык" << endl;
        return 1;
    }
    switch (nomerdnya) { 
    case 1:
        if (yaz == "RUS") cout << "понедельник";
        else cout << "monday";
        break;
    case 2:
        if (yaz == "RUS") cout << "вторник";
        else cout << "tuesday";
        break;
    case 3:
        if (yaz == "RUS") cout << "среда";
        else cout << "wednesday";
        break;
    case 4:
        if (yaz == "RUS") cout << "четверг";
        else cout << "thursday";
        break;
    case 5:
        if (yaz == "RUS") cout << "пятница";
        else cout << "friday";
        break;
    case 6:
        if (yaz == "RUS") cout << "суббота";
        else cout << "saturday";
        break;
    case 7:
        if (yaz == "RUS") cout << "воскресенье";
        else cout << "sunday";
        break;
    default:
        cout << "такого дня не существует";
        return 1;
    }

    cout << endl;
    return 0;
}