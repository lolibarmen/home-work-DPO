#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    bool isIsogram = true;
    cout << "Введите строку: ";
    getline(cin, word);

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == ' ') continue;
        for (int j = i + 1; j < word.length(); j++) {
            if (word[j] == ' ') continue;
            if (word[i] == word[j]) {
                isIsogram = false;
                break;
            }
        }
        if (!isIsogram) break;
    }

    cout << boolalpha << isIsogram << endl;
    return 0;
}
