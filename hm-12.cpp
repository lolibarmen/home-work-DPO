#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;
public:
    Student() {}
    Student(string n, int a, double s) : name(n), age(a), score(s) {}
    void setName(string n) { name = n; }
    string getName() { return name; }
    void setAge(int a) { age = a; }
    int getAge() { return age; }
    void setScore(double s) { score = s; }
    double getScore() { return score; }
    bool isAdult() const { return age >= 18; }
    void updateScore(double delta) { score += delta; }
    void show() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Средний балл: " << score << endl;
        cout << "Совершеннолетний: " << (isAdult() ? "да" : "нет") << endl;
    }
};

int main() {
    Student st("Иван", 19, 4.2);
    st.show();
    st.updateScore(0.3);
    st.show();
    return 0;
}
