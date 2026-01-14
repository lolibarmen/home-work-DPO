#include <iostream>
using namespace std;

int sumToN(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return n + sumToN(n - 1);
}

int main() {
    int n;
    cout << "Введите N: ";
    cin >> n;
    cout << "Сумма: " << sumToN(n) << endl;
    return 0;
}
