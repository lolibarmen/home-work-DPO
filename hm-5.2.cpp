#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Введите год: ";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << year << " - високосный" << endl;
    else
        cout << year << " - не високосный" << endl;
    return 0;
}
