#include <iostream>
using namespace std;

int main() {
    double r;
    const double pi = 3.14;
    cout << "Введите радиус: ";
    cin >> r;
    cout << "Площадь круга: " << pi * r * r << endl;
    return 0;
}
