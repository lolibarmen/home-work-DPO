#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Введите число: ";
    cin >> num;
    cout << "Как double: " << num << endl;
    cout << "Как int: " << (int)num << endl;
    cout << "Число не равно 0? " << (bool)num << endl;
    return 0;
}
