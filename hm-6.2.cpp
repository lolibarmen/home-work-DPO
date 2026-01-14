#include <iostream>
using namespace std;

int main() {
    int arr[2][2] = {{5, 2}, {7, 4}};
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Главная диагональ:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
    return 0;
}
