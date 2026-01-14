#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Введите первую строку: ";
    getline(cin, s1);
    cout << "Введите вторую строку: ";
    getline(cin, s2);
    cout << "Результат: " << s1 + s2 << endl;
    return 0;
}
