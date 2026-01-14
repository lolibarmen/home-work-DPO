#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 10 + 1;
        sum += arr[i];
    }
    cout << "Элементы массива: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl << "Сумма элементов: " << sum << endl;
    return 0;
}
