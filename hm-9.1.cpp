#include <iostream>
using namespace std;

int sumOfThree(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    cout << "Сумма: " << sumOfThree(a, b, c) << endl;
    return 0;
}
