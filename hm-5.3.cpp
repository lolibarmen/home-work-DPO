#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Введите N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Сумма: " << sum << endl;
    return 0;
}
