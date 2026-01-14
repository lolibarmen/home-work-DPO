#include <iostream>
using namespace std;

int main() {
    double length, width;
    cout << "Введите длину: ";
    cin >> length;
    cout << "Введите ширину: ";
    cin >> width;
    cout << "Периметр: " << 2 * (length + width) << endl;
    cout << "Площадь: " << length * width << endl;
    return 0;
}
