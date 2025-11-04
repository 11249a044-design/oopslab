#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {
        cout << "Constructor called with value " << value << endl;
    }
    Number(const Number &n) {
        value = n.value;
        cout << "Copy constructor called with value " << value << endl;
    }
    int getValue() { return value; }
};

Number createNumber() {
    Number n(10);
    return n;
}

int main() {
    Number n1 = createNumber();
    cout << "Value in n1: " << n1.getValue() << endl;
    return 0;
}
