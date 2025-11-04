#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}
    void setLength(int l) { length = l; }
    int getLength() { return length; }
};

void passByValue(Box b) {
    b.setLength(50);
    cout << "Inside passByValue: " << b.getLength() << endl;
}

void passByPointer(Box* b) {
    b->setLength(100);
    cout << "Inside passByPointer: " << b->getLength() << endl;
}

void passByReference(Box& b) {
    b.setLength(150);
    cout << "Inside passByReference: " << b.getLength() << endl;
}

int main() {
    Box b(10);
    cout << "Original: " << b.getLength() << endl;

    passByValue(b);
    cout << "After passByValue: " << b.getLength() << endl;

    passByPointer(&b);
    cout << "After passByPointer: " << b.getLength() << endl;

    passByReference(b);
    cout << "After passByReference: " << b.getLength() << endl;

    return 0;
}
