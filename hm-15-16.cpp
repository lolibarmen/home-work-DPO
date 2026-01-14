#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    double cx = 2, cy = -1, r = 5;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    double dist = pow(x - cx, 2) + pow(y - cy, 2);
    if (dist < r * r) {
        cout << "Точка внутри окружности" << endl;
    } else if (dist == r * r) {
        cout << "Точка на границе окружности" << endl;
    } else {
        cout << "Точка вне окружности" << endl;
    }
    return 0;
}
