#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, x;
    cout << "Введите размер массива: ";
    cin >> N;
    int arr[100];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << "Введите число x: ";
    cin >> x;
    
    sort(arr, arr + N);
    
    int left = 0, right = N - 1, index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            index = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (index != -1) {
        cout << "Индекс искомого элемента: " << index << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}
