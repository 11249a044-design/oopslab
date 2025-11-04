#include <iostream>
using namespace std;

class Person {
    string name;
public:
    Person() {
        name = "Unknown";
        cout << "Default constructor called\n";
    }
    Person(string n) {
        name = n;
        cout << "Parameterized constructor called for " << name << endl;
    }
    Person(const Person &p) {
        name = p.name;
        cout << "Copy constructor called for " << name << endl;
    }
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p1;
    Person p2("Alice");
    Person p3 = p2;

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
