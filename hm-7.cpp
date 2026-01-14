#include <iostream>
using namespace std;

int main() {
    int x, original, reversed = 0;
    cout << "Введите число: ";
    cin >> x;
    original = x;
    if (x < 0) {
        cout << "false" << endl;
        return 0;
    }
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    cout << boolalpha << (original == reversed) << endl;
    return 0;
}
