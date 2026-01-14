#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> words = {"codewars", "flick", "code", "wars"};
    vector<bool> result;
    bool current = true;
    for (string w : words) {
        result.push_back(current);
        if (w == "flick") {
            current = !current;
        }
    }
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << (result[i] ? "true" : "false");
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}
