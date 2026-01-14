#include <iostream>
using namespace std;

void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Исходный массив: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    doubleArray(arr, 5);
    cout << "После удвоения: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
